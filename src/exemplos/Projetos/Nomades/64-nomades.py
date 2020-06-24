#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Estruturas de Dados
#
# Simulação de tribos nômades em uma área.

import os
import random
import sys
import time

# Configurações:
TRIBOS_BRASILEIRAS = ['Ashaninka', 'Bororo', 'Carajá',
                      'Guarani', 'Jaminawa', 'Kaxinauá',
                      'Mundurucu', 'Pataxó', 'Shanenawa',
                      'Tamoio', 'Wai-wai', 'Xingu',
                      'Yanomami']
NUM_REGIÕES = 5
MIN_RECURSOS = 50
MAX_RECURSOS = 100
TAXA_REGENERAÇÃO = 0.1
PROB_HABITÁVEL = 0.8
NUM_TRIBOS = 10
POPULAÇÃO = 50
NATALIDADE = 0.4
MORTALIDADE = 0.4
NUM_ÉPOCAS = 100
DURAÇÃO_ÉPOCA = 0.5


class Ambiente():
    def __init__(self, regiões=None, nômades=None):
        self.regiões = regiões
        self.nômades = nômades

    def __str__(self):
        regiões = '\n'.join(' '.join(str(r) for r in lista)
                            for lista in self.regiões)
        nômades = '\n'.join(str(t) for t in self.nômades)
        return f'{regiões}\n{nômades}'

    def atualiza(self):
        for lista in self.regiões:
            for região in lista:
                região.regenera()

        for tribo in self.nômades:
            if tribo.população > 0:
                tribo.subsistência()
                tribo.atualiza_população()
                if tribo.vai_migrar():
                    região = tribo.seleciona(self.vizinhança(tribo.região))
                    self.migração(tribo, região)

    def coordenadas(self, região):
        for x in range(len(self.regiões)):
            for y in range(len(self.regiões[x])):
                if regiões[x][y] == região:
                    return x, y

        return None, None

    def migração(self, tribo, região):
        # Assume-se que não há efeitos na migração.
        tribo.região = região

    def pode_migrar(self, x, y):
        if not (0 <= x < len(self.regiões) and
                0 <= y < len(self.regiões[x])):
            return False

        if not self.regiões[x][y].habitável:
            return False

        # A região não deve estar ocupada.
        return all(self.regiões[x][y] != tribo.região
                   for tribo in nômades)

    def vizinhança(self, região):
        x, y = self.coordenadas(região)
        opções = []
        if self.pode_migrar(x - 1, y):
            opções.append(regiões[x - 1][y])
        if self.pode_migrar(x + 1, y):
            opções.append(regiões[x + 1][y])
        if self.pode_migrar(x, y - 1):
            opções.append(regiões[x][y - 1])
        if self.pode_migrar(x, y + 1):
            opções.append(regiões[x][y + 1])
        return opções if opções else [região]


class Região():
    def __init__(self, recursos, regeneração, habitável):
        self.recursos = recursos
        self.regeneração = regeneração
        self.habitável = habitável

    def __str__(self):
        if self.habitável:
            return f'{self.recursos:03}'
        return '***'

    def regenera(self):
        self.recursos = min(MAX_RECURSOS,
                            self.recursos * int(1 + self.regeneração))


class Nômade():
    def __init__(self, nome, população, natalidade, mortalidade, região):
        self.nome = nome
        self.população = população
        self.natalidade = natalidade
        self.mortalidade = mortalidade
        self.região = região

    def __str__(self):
        return (f'{self.nome:9}: '
                f'{self.população:3} '
                f'(+{self.natalidade:.2f} | '
                f'-{self.mortalidade:.2f})')

    def atualiza_população(self):
        natalidade = int(self.população * self.natalidade)
        mortalidade = int(self.população * self.mortalidade)
        self.população = max(0, self.população + natalidade - mortalidade)

    def consumo(self):
        return self.população

    def vai_migrar(self):
        return self.consumo() > self.região.recursos

    def seleciona(self, regiões):
        return random.choice(regiões)

    def subsistência(self):
        disponível = min(self.região.recursos, self.consumo())
        self.população = disponível
        self.região.recursos -= disponível


def heatmap(ambiente):
    def block(code):
        return f'\u001b[38;5;{code}m█\u001b[0m'

    def heat(região):
        if not região.habitável:
            return block(0)  # black

        ratio = região.recursos / MAX_RECURSOS
        if ratio >= 0.9:
            return block(35)  # green
        elif ratio > 0.6:
            return block(119)  # light green
        elif ratio > 0.4:
            return block(226)  # yellow
        elif ratio > 0.25:
            return block(202)  # orange

        return block(196)  # red

    hmap = [[heat(região) for região in lista]
            for lista in ambiente.regiões]

    for tribo in ambiente.nômades:
        if tribo.população > 0:
            x, y = ambiente.coordenadas(tribo.região)
            hmap[x][y] = tribo.nome[0]

    regiões = '\n'.join(''.join(h for h in lista) for lista in hmap)
    nômades = '\n'.join(str(tribo) for tribo in ambiente.nômades)
    return f'{regiões}\n{nômades}'


def inicializa_regiões():
    # Espera-se que o 1o argumento seja um arquivo com a mapa da região.
    if len(sys.argv) < 2:
        return [[região_aleatória() for _ in range(NUM_REGIÕES)]
                for _ in range(NUM_REGIÕES)]

    with open(sys.argv[1], 'r') as f:
        regionmap = f.read().split('\n')

    return [[Região(recursos=MAX_RECURSOS,
                    regeneração=MAX_RECURSOS * TAXA_REGENERAÇÃO,
                    habitável=(regionmap[x][y] == '*'))
             for y in range(len(regionmap[x]))]
            for x in range(len(regionmap))]


def mostra_terminal(ambiente):
    os.system('clear')
    print(f'Época: {época}/{NUM_ÉPOCAS}')
    print(heatmap(ambiente))
    time.sleep(DURAÇÃO_ÉPOCA)


def região_aleatória():
    return Região(recursos=random.randint(MIN_RECURSOS, MAX_RECURSOS),
                  regeneração=random.random() * TAXA_REGENERAÇÃO,
                  habitável=(random.random() <= PROB_HABITÁVEL))


def tribo_aleatória(nome, regiões):
    região = random.choice([r for lista in regiões
                            for r in lista if r.habitável])
    return Nômade(nome=nome,
                  região=região,
                  população=POPULAÇÃO,
                  natalidade=random.random() * NATALIDADE,
                  mortalidade=random.random() * MORTALIDADE)


# Definição das condições iniciais do ambiente:
regiões = inicializa_regiões()

nômades = [tribo_aleatória(nome, regiões)
           for nome in random.sample(TRIBOS_BRASILEIRAS, NUM_TRIBOS)]

ambiente = Ambiente(regiões=regiões, nômades=nômades)

for época in range(NUM_ÉPOCAS):
    ambiente.atualiza()
    mostra_terminal(ambiente)
