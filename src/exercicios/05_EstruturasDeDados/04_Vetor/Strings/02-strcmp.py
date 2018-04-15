#  -*- coding: utf-8 -*-
#    @package: 02-strcmp.py
#     @author: Guilherme N. Ramos (gnramos@unb.br)
# @disciplina: Algoritmos e Programação de Computadores
#
# Implemente a função strcmp.


def strcmp(str1, str2):
    '''Comparação lexicográfica, retorna:
        -1 se str1 for menor que str2
        0 se forem iguais
        1 se str1 for maior que str2
    '''
    # Implemente o código aqui.
    pass


if __name__ == '__main__':
    str0 = 'abc'
    str1 = 'ABC'
    str2 = 'a'
    str3 = 'abcde'

    print('strcmp({},{})={}'.format(str0, str0, strcmp(str0, str0)))
    print('strcmp({},{})={}'.format(str0, str1, strcmp(str0, str1)))
    print('strcmp({},{})={}'.format(str0, str2, strcmp(str0, str2)))
    print('strcmp({},{})={}'.format(str0, str3, strcmp(str0, str3)))
    print('strcmp({},{})={}'.format(str1, str1, strcmp(str1, str1)))
    print('strcmp({},{})={}'.format(str1, str2, strcmp(str1, str2)))
    print('strcmp({},{})={}'.format(str1, str3, strcmp(str1, str3)))
    print('strcmp({},{})={}'.format(str2, str2, strcmp(str2, str2)))
    print('strcmp({},{})={}'.format(str2, str3, strcmp(str2, str3)))
    print('strcmp({},{})={}'.format(str3, str3, strcmp(str3, str3)))

# Saída esperada:
#
# strcmp(abc,abc)=0
# strcmp(abc,ABC)=1
# strcmp(abc,a)=1
# strcmp(abc,abcde)=-1
# strcmp(ABC,ABC)=0
# strcmp(ABC,a)=-1
# strcmp(ABC,abcde)=-1
# strcmp(a,a)=0
# strcmp(a,abcde)=-1
# strcmp(abcde,abcde)=0
