#  -*- coding: utf-8 -*-
#    @package: 01-horas.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Exemplo de execução sequencial de instruções.


DIAS_NO_ANO = 365
HORAS_NO_DIA = 24

idade_em_anos = int(input('Olá! Quantos anos você tem? '))

# Agora que se tem a idade em anos, é possível calcular
# quantos dias já foram vividos (aproximadamente).
idade_em_dias = idade_em_anos * DIAS_NO_ANO

# E agora que se sabe quantos foram os dias, pode-se calcular
# quantas horas foram vividas (aproximadamente).
horas_vividas = idade_em_dias * HORAS_NO_DIA

# Só agora é possível mostrar o resultado.
print('Sabia que já viveu', horas_vividas, 'horas?')
