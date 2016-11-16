################################################################################
#       @file roteiro.gdb
#     @author Guilherme N. Ramos (gnramos@unb.br)
# @disciplina Algoritmos e Programação de Computadores
#
# Roteiro para depuração do arquivo gdb.c.
#
# Sem maiores interações com o usuário
set confirm off
################################################################################

printf "\n[DEPURAÇÃO] gdb sempre começa mostrando algumas informações...\n\n"

## Executando o arquivo binário:
run

# O programa deve ter recebido um sinal de erro, indicado algo como:
# Program received signal SIGFPE, Arithmetic exception.
# 0x0000000000400534 in divisao (x=3, y=0) at gdb.c:13
# 13		return (x / y);

printf "\n[DEPURAÇÃO] Neste momento, 'x=%d' e 'y=%d'\n", x, y

# Com estas informações, fica fácil identificar o problema:
# -> Motivo da interrupção da execução: "Program received signal SIGFPE, Arithmetic exception."
# -> Onde ocorreu o problema:
#    - na posição de memória 0x0000000000400534
#    - no arquivo fonte 'gdb.c':
#        - na função 'divisao', com os argumentos 'x=3' e 'y=0'
#        - na instrução definida na linha 13.
#        - que é: 'return (x / y);'

printf "\n[DEPURAÇÃO] Este foi o fluxo até o erro:\n\n"
backtrace

#0  0x0000000000400534 in divisao (x=3, y=0) at gdb.c:13
#1  0x00000000004005ca in main () at gdb.c:27

# Ou seja, na execução da função 'divisao' (na linha 13), chamada pela função
# 'main' (na linha 27). Juntando as informações, fica mais fácil identificar o
# problema: a divisão pelo valor '0'. E é fácil testar esta hipótese.

## Neste ponto, o processo problemático ainda está sendo executado...
printf "\n[DEPURAÇÃO] Interrompendo o processo...\n"
kill


## Definir um ponto de parada (breakpoint) adequado (antes de executar a
## 'divisao' com valor '0' -> linha 27):
printf "\n[DEPURAÇÃO] ... definindo um ponto de parada:\n"
break 27

printf "\n[DEPURAÇÃO] Nova execução do programa...\n"
run

## Neste ponto, o a execução do programa é interrompida na linha 27. Confirmando
## o valor de y (no escopo da 'main'):
printf "\n[DEPURAÇÃO] Neste momento, 'y' vale %d\n", y

## Avançar um passo na execução (efetivamente entrando na função 'divisao'):
printf "\n[DEPURAÇÃO] Avançando um passo...\n\n"
step

## Confirmando o valor de y (no escopo da 'divisao'):
printf "\n[DEPURAÇÃO] Neste momento, 'y' vale %d\n", y

## Teoricamente o próximo passo causa o erro, testando a hipótese alterando o
## valor de y para um valor que não cause erro:
set y=1

## Confirmar que o novo valor de y:
printf "\n[DEPURAÇÃO] Neste momento, 'y' vale %d\n\n", y

## Continuar com a execução:
continue

# Já que o valor foi alterado, o erro não foi repetido, e o programa termina
# normalmente. O gdb devemostrar algo como:
#    [Inferior 1 (process 27658) exited normally]

# Note que o valor foi alterado apenas no escopo de uma execução da função,
# portanto o valor de 'y' na 'main' continua como 0.

## Finalizar a depuração (identificado o problema, agora é só consertar o código
## fonte).
quit
