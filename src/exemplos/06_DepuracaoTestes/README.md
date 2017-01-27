Parte 06: Depuração
==================


GDB
---

A depuração com o [gdb](https://pt.wikipedia.org/wiki/GNU_Debugger) não é difícil, mas requer, além de conhecer os comandos básicos, um pouco de prática.

Junto aos exemplos, há um arquivo com roteiro de testes para análise. Este roteiro deve ser executado manualmente pelo menos uma vez (digitando cada instrução dada!), mas pode ser realizado automaticamente com o comando:

```bash
gdb executável --command=roteiro.gdb
```

Mais detalhes no [material de apoio](../../../pdf/06_DepuracaoTestes.pdf).


PDB
---

A depuração com o [pdb](https://docs.python.org/3/library/pdb.html) também é relativamente simples, mas exige certa prática.
