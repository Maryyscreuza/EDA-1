Linguagem C

-> Case sensitive: difere letras maiúsculos e minúsculos

-> Estrutura Básica: Todo programa em C tem necessariamente a função main -- main () { }

-> Comentários são entre /* */

-> \ para quebrar linha e continuar na linha de baixo

-> Suporta inteiro, real e caractere

* int - números inteiros
* float - números de ponto flutuante
* double - números de ponto flutuante com precisão dupla
* char - caracteres individuais
* void - para declarar variável ou procedimento que não tem um tipo mas existe

-> '' caractere, "" string

-> %d - serve para ler um int
%f - serve para ler um float
%c - serve para ler um char (caractere)
& - coloca no endereço de memória onde a variável está armazenado na memória

-> Saltar linha: \n; dar tab \t

-> Incluir outro arquivo: #include <nome do arquivo> (ou "nome do arquivo" (serve normalmente para incluir algum arquivo que tenha sido criado pelo próprio programador ou por terceiros e que se encontre no mesmo diretório do programa que está sendo compilado.))
-- Alguns arquivos para C:
* stdio.h -> Funções de entrada e saída (I/O)
* string.h -> Funções de tratamento de strings
* math.h -> Funções matemáticas
* ctype.h -> Funções de teste e tratamento de caracteres
* stdlib.h -> Funções de uso genérico

-> Estruturas de controle:
For - usada para executar um bloco de códigos repetidamente por uma quantidade específica de vezes.
While - usada para executar um bloco de códigos repetidamente quando uma condição for verdadeira.
Do while - usada para executar um bloco de códigos repetidamente enquanto uma condição for verdadeira, executando pelo menos uma vez o que está dentro dele.

-> Procedimentos em C: são definidos com o tipo void e não retornam valor 
* O void pode ficar em arquivo separado e dar include no código que vai utilizar esse procedimento
* Não retorna nada, então Return 0

-> Operadores em C:
soma: +
subtração: -
multiplicação: *
divisão: /
resto de divisão: % (retorna o resto da divisão de um número por outro)
teste de igualdade: ==

-> if e else não precisam de {} se tiver somente um comando

-> SWITCH CASE: Economizar tempo para tomar decisoes com variavel int ou char
break - encerra o switch case
default - executa se nenhum caso do switch case for executado

-> Função rand para ler as coisas sem scanf
