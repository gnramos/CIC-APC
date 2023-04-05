Projetos
========

Os exemplos aqui ilustram o desenvolvimento de projetos mais complexos que os exemplos vistos em sala. Normalmente se tem um arquivo de código onde o algoritmo é representado, e este vai sendo alterado a medida que o projeto vai avançando. Embora o Git seja uma ferramenta adequada para rastrear estas alterações, para facilitar o entendimento e a comparação entre versões, cada variação do código é apresentada em um arquivo separado.

Cada arquivo deve compilar sem erros, mas como a ideia é mostrar a evolução do código, nem todo programa terá um comportamento completo.

Para verificar a evolução de cada projeto, basta definir a linguagem usada no programa (`c` para C, `py` para Python):
```bash
python3 diff.py -e ? NomeDoProjeto
```

Por exemplo:
```bash
python3 diff.py -e c BatalhaNaval
python3 diff.py -e py Nomades
```
