# uva 12405 - Scarecrow

## Autor

Aluno: José Aquiles Guedes de Rezende
matricula: 160010331

## Descrição do problema

[uva 12405 - Scarecrow](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3836 "clique aqui para acessar a descrição do problema")

## Solução

Para solucionar o problema é necessário ao acessar uma terra infértil simplismente avance até a próxima terra,
ao acessar uma terra fértil coloque um espantalho e avance três terras, que é o alcance do espantalho.

Como por exemplo o seguinte input:

    1
    10
    #.........

Os espantlhos hipoteticamente representados por "|" estariam espalhados assim:

    #|..|..|..

Por mais que os espantalhos não estejam nos lugares corretos o problema só necessita do número de espantalhos o que no caso dessa solução sempre da o número correto.