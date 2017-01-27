################################################################################
#       @file roteiro.gdb
#     @author Guilherme N. Ramos (gnramos@unb.br)
# @disciplina Algoritmos e Programação de Computadores
#
# Exemplo de depuração.
#
# Sem maiores interações com o usuário
set confirm off
################################################################################

printf "\n[DEPURAÇÃO] gdb sempre começa mostrando algumas informações...\n\n"

## Executando o arquivo binário:
run

# O programa deve ter recebido um sinal de erro, indicado algo como:
# Program received signal SIGSEGV, Segmentation fault.
# 0x00000000004005a6 in cabum () at main.c:16
# 16      *ptr = 5;

printf "\n[DEPURAÇÃO] Este foi o fluxo até o erro:\n\n"
backtrace


quit
