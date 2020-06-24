#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Estruturas de Dados
#
# Simulação de tribos nômades em uma área.

import random

# Configurações:
TRIBOS_BRASILEIRAS = ['Ashaninka', 'Bororo', 'Carajá',
                      'Guarani', 'Jaminawa', 'Kaxinauá',
                      'Mundurucu', 'Pataxó', 'Shanenawa',
                      'Tamoio', 'Wai-wai', 'Xingu',
                      'Yanomami']
NUM_REGIÕES = 5
MIN_RECURSOS = 50
MAX_RECURSOS = 100


# Ambiente:
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


def migração(tribo, região):
    # Assume-se que não há efeitos na migração.
    tribo.região = região


def coordenadas(região):
    for x in range(len(regiões)):
        for y in range(len(regiões[x])):
            if regiões[x][y] == região:
                return x, y

    return None, None


def pode_migrar(x, y):
    if not (0 <= x < len(regiões) and
            0 <= y < len(regiões[x])):
        return False

    if not regiões[x][y].habitável:
        return False

    # A região não deve estar ocupada.
    return all(regiões[x][y] != tribo.região
               for tribo in nômades)


def vizinhança(região):
    x, y = coordenadas(região)
    opções = []
    if pode_migrar(x - 1, y):
        opções.append(regiões[x - 1][y])
    if pode_migrar(x + 1, y):
        opções.append(regiões[x + 1][y])
    if pode_migrar(x, y - 1):
        opções.append(regiões[x][y - 1])
    if pode_migrar(x, y + 1):
        opções.append(regiões[x][y + 1])
    return opções if opções else [região]


def região_aleatória():
    return Região(recursos=random.randint(MIN_RECURSOS, MAX_RECURSOS),
                  regeneração=random.random() * 0.1,
                  habitável=(random.random() <= 0.8))


def tribo_aleatória(nome, regiões):
    região = random.choice([r for lista in regiões
                            for r in lista if r.habitável])
    return Nômade(nome=nome,
                  região=região,
                  população=50,
                  natalidade=random.random() * 0.4,
                  mortalidade=random.random() * 0.4)


# Definição das condições iniciais do ambiente:
regiões = [[região_aleatória() for _ in range(NUM_REGIÕES)]
           for _ in range(NUM_REGIÕES)]

nômades = [tribo_aleatória(nome, regiões)
           for nome in random.sample(TRIBOS_BRASILEIRAS, 5)]

for época in range(100):
    for lista in regiões:
        for região in lista:
            região.regenera()

    for tribo in nômades:
        if tribo.população > 0:
            tribo.subsistência()
            tribo.atualiza_população()
            if tribo.vai_migrar():
                região = tribo.seleciona(vizinhança(tribo.região))
                migração(tribo, região)

    for lista in regiões:
        print(' '.join(str(região) for região in lista))
    for tribo in nômades:
        print(tribo)
