Redirecionamento
================

Redirecionamento é uma capacidade de muitos interpretadores da linha de comando de direcionar os fluxos de entrada/saída de dados para localizações especificadas pelo usuário. Geralmente isso é feito para direcionar a entrada/saída do programa para um arquivo, facilitando os testes.

Saída
-----

O redirecionamento da saída padrão é feito com o caractere '>'. Supondo o código fonte [01-printf.c](00_Saida/01-printf.c), as instruções a seguir compilam o código e o executam, redirecionando a saída padrão para o arquivo ```saida.txt```:

```bash
gcc -Wall -ansi 01-printf.c -o executavel
./executavel > saida.txt
```

O mesmo procedimento se aplica a programas em Python:

```bash
python 01-print.py > saida.txt
```

Isso implica que ao invés das mensagens serem exibidas na saída no monitor, são escritas no arquivo (que é criado se não existir, sobrescrito caso contrário).

Entrada
-------

O mesmo pode ser feito com a entrada padrão, utilizando o caractere '<'. Supondo o código fonte [01-scanf.c](01_Entrada/01-scanf.c), as instruções a seguir compilam o código e o executam, redirecionando a entrada padrão do arquivo [entrada.txt](01_Entrada/entrada.txt):

```bash
gcc -Wall -ansi 01-scanf.c -o executavel
./executavel < entrada.txt
```

```bash
python 01-input.py < entrada.txt
```

Isso implica que ao invés das entradas serem lidas do teclado, são lidas do arquivo. Cuidado para que o arquivo de teste tenha conteúdo compatível com o que é esperado pelo programa. Por exemplo, os arquivos ```01-scanf.c``` e ```01-input.py``` esperam que a entrada seja um número inteiro, seguido de um real, seguido de um caractere, como no arquivo ```entrada.txt```.

Entrada + Saída
---------------

Você pode usar ambos ao mesmo tempo! Essa abordagem é muito interessante para lidar com programas que tem entradas e saídas mais longas, pois facilita a análise do comportamento

```bash
gcc -Wall -ansi 01-scanf.c -o executavel
./executavel < entrada.txt > saida.txt
```

```bash
python 01-input.py < entrada.txt > saida.txt
```

Se você tiver um gabarito da saída esperada, pode compará-lo com o seu resultado usando um programa como [diff](https://pt.wikipedia.org/wiki/Diff) (mais informações [aqui](/src/exercicios)).