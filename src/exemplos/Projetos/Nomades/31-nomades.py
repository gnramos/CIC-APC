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


# Ambiente:
class Região():
    def __init__(self, recursos, regeneração, habitável):
        self.recursos = recursos
        self.regeneração = regeneração
        self.habitável = habitável

    def regenera(self):
        self.recursos = min(100,
                            self.recursos * int(1 + self.regeneração))


class Nômade():
    def __init__(self, nome, população, natalidade, mortalidade, região):
        self.nome = nome
        self.população = população
        self.natalidade = natalidade
        self.mortalidade = mortalidade
        self.região = região

    def atualiza_população(self):
        natalidade = int(self.população * self.natalidade)
        mortalidade = int(self.população * self.mortalidade)
        self.população = max(0, self.população + natalidade - mortalidade)

    def consumo(self):
        return self.população

    def subsistência(self):
        disponível = min(self.região.recursos, self.consumo())
        self.população = disponível
        self.região.recursos -= disponível


def região_aleatória():
    return Região(recursos=random.randint(50, 100),
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
regiões = [[região_aleatória() for _ in range(5)] for _ in range(5)]
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
#             Se a tribo decide migrar:
#                 A tribo seleciona uma região vizinha habitável.
#                 A tribo se desloca para a região selecionada.

#     Apresentar o ambiente.

# Apresentar informações sobre a simulação.
