################################################################################
#       @file roteiro.gdb
#     @author Guilherme N. Ramos (gnramos@unb.br)
# @disciplina Algoritmos e Programação de Computadores
#
# Roteiro para depuração do arquivo gdb.c.
#
# Para testar, basta:
#   1) gerar o executável:
#        gcc -g gdb.c
#   2) depurar o arquivo gerado com o script definido neste arquivo:
#        gdb a.out -x roteiro.gdb
################################################################################

# Sem maiores interações com o usuário
set confirm off

printf "\n[DEPURAÇÃO] O gdb sempre começa mostrando algumas informações...\n\n"

## Executando o arquivo binário:
run

# O programa deve ter recebido um sinal de erro, indicado algo como:
# Program received signal SIGSEGV, Segmentation fault.
# 0x0000000000400545 in main () at gdb.c:18
# 18	  printf("\n i = %d\n", *ptr);


# Com estas informações, fica fácil identificar o problema:
# -> Motivo da interrupção da execução: "Program received SIGSEGV, Segmentation fault."
# -> Onde ocorreu o problema:
#    - na posição de memória 0x0000000000400545
#    - no arquivo fonte 'gdb.c':
#        - na instrução definida na linha 18.
#        - que é: 'printf("\n i = %d\n", *ptr);'

printf "\n[DEPURAÇÃO] Este foi o fluxo até o erro:\n\n"
backtrace

#0  0x0000000000400545 in main () at gdb.c:18

# Ou seja, na execução da instrução na linha 18. O mais provável é que algo
# esteja errado com os argumentos dados, então vamos testar esta hipótese.

## Neste ponto, o processo problemático ainda está sendo executado...
printf "\n[DEPURAÇÃO] Interrompendo o processo...\n"
set confirm
kill

## Definir um ponto de parada (breakpoint) adequado (antes de executar o
## 'printf' -> linha 18)
printf "\n[DEPURAÇÃO] ... definindo um ponto de parada:\n"
break 18

printf "\n[DEPURAÇÃO] Nova execução do programa...\n"
run

## Neste ponto, o a execução do programa é interrompida na linha 18. Confirmando
## o valor de ptr (no escopo da 'main'):
printf "\n[DEPURAÇÃO] Neste momento, 'ptr' vale %p\n", ptr

# (nil) não é um endereço de memória válido, portanto eis o problema. Este pode
# ser consertado facilmente
set ptr=(&i)

## Confirmando o valor de ptr:
printf "\n[DEPURAÇÃO] Neste momento, 'ptr' vale %p\n", ptr

## Continuar com a execução:
continue

# Já que o valor foi alterado, o erro não foi repetido, e o programa termina
# normalmente. O gdb devemostrar algo como:
#    [Inferior 1 (process 30170) exited normally]

quit
