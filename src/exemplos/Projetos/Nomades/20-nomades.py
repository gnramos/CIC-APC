#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Estruturas de Dados
#
# Simulação de tribos nômades em uma área.

import random


# Ambiente:
class Região():
    def __init__(self, recursos, regeneração, habitável):
        self.recursos = recursos
        self.regeneração = regeneração
        self.habitável = habitável


class Nômade():
    def __init__(self, nome, população, natalidade, mortalidade, região):
        self.nome = nome
        self.população = população
        self.natalidade = natalidade
        self.mortalidade = mortalidade
        self.região = região


def região_aleatória():
    return Região(recursos=random.randint(50, 100),
                  regeneração=random.random() * 0.1,
                  habitável=(random.random() <= 0.8))


# Definição das condições iniciais do ambiente:
#     Definição das regiões.
#     Definição dos nômades.

# Para cada época da simulação:
#     Atualizar o ambiente:
#         Para cada região:
#             A região regenera.
#         Para cada tribo de nômades:
#             A tribo consome os recursos disponíveis da região.
#             A tribo tem mudanças na população.
#             Se a tribo decide migrar:
#                 A tribo seleciona uma região vizinha habitável.
#                 A tribo se desloca para a região selecionada.
#     Apresentar o ambiente.

# Apresentar informações sobre a simulação.
