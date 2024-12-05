# Estrutura de Dados e Algoritmos

Estrutura de dados Compostas Homogêneas: 
- são estruturas de dados que consistem em conjuntos onde todos os elementos são do mesmo tipo
- todos os elementos são tratados da mesma maneira, então é simples manipular dados
- Ex: Imagens, vídeos (é em matriz cúbica), dados estatísticos.

## MATRIZES

- Vetores: 
	- int(ou double, char...) vetor(nome da variável)[dimensão da variável] = variável que queremos que inicialize o vetor;
	- Declaração: int vetor[10] = 0; // Declara um vetor de inteiros com 10 elementos, todos inicializados com 0.
		- Quando declaramos um vetor int (inteiro) de 10 elementos, significa que estamos pegando 40 bytes da memória para armazenar esse vetor, já que cada elemento int equivale a 4 bytes.
	- Modificação: vetor[5] = 15; // Atribui o valor 15 ao sexto elemento do vetor.
	- Quando declarado uma variável de vetor, não sabemos o conteúdo dela se não declarado. [] = ?

- Matrizes 2D:
	- int matriz [3][4] = {{0}}; // Declara uma matriz 3x4 de inteiros, todos inicializados com 0.
	- matriz [2][1] = 15; Atribui o valor 15 ao elemento da terceira linha e segunda coluna.

- Exemplo de matriz 2D: LINHAS (0,1,2) / COLUNAS (0,1,2,3)

|   | 0 | 1  | 2 | 3 |
|---|---|----|---|---|
| 0 | 0 | 0  | 0 | 0 |
| 1 | 0 | 0  | 0 | 0 |
| 2 | 0 | 15 | 0 | 0 |

- Matrizes 3D:
	- int matriz[2][3][4] = {{{0}}}; // Declara uma matriz 2x3x4 de inteiros, todos inicializados com 0.
	- matriz[1][2][3] = 15; // Atribui o valor 15 ao elemento na segunda camada, terceira linha e quarta coluna0.

## ARQUIVOS

- Algumas funções:
	- fopen - para abrir ou criar um arquivo
	- fclose - fecha o arquivo
	- fgetc - ler dados do arquivo (caracteres)
	- fputc - inserir caracteres no arquivo sem sobrepor o que havia antes
	- fgets - ler dados do arquivo (string)
	- fputs - inserir texto no arquivo sem sobrepor o que havia antes
	- gets - obtem uma string do teclado e joga para alguma variável (geralmente vetor em char). E ele dá uma instrução de fim de string. Se setado 5 posições, vai da 0 a 4, passar disso ele 
	- strlen - pega a ultima posição e lê a partir dela.

- O que algumas letras significam nas funções:
	- "r" - para ler o arquivo, se o arquivo não existir ele retorna nulo.
	- "w" - para escrever no arquivo, se o arquivo não exister um novo arquivo é criado. Ele inicia no começo do arquivo, no byte 0, sobrescrevendo o que tiver no arquivo.
	- "a" - para adicionar novos incrementos no final do arquivo, se o arquivo não existir um novo arquivo é criado. Inicia no fim do arquivo, sem sobrescrever o que há no arquivo. 
	- "r+" - Para ler, escrever, modificando os incrementos do arquivo, se não existir retorna nulo.
	- "w+" - Para ler, escrever, modificando os incrementos do arquivo, se não existir um novo arquivo é criado.
	- "a+" - Para ler e adicionar novos incrementos no fim do arquivo, não podendo modificar incrementos antigos. Se o arquivo não existir, um novo será criado.

- Uma hierarquia comum de arquivo pode ser subdividida em cinco categorias: 
	1. *Bit Binary* : digit, 0 or 1
 	2. *Byte* : oito bits (
   		- Se você tem um byte com 8 bits, você tem um campo que pode ter por exemplo um nome completo, ou seja um campo contém varios bites
	3. *Field* : Agrupamento de bytes
   		- Pode ser um campo do tipo float, inteiro …
	4. *Record* : Agrupamento de campos 
	5. *File* : Agrupamento de registros
   		- Eu posso ter em cada arquivo desses varios registros. Ex. um texto com varios conjuntos de caracteres

## VARIÁVEL

- Uma variável tem tipo, tem nome, endereço na memória e tem um valor. Por exemplo um float ocupa 4 byte de espaço na memória
	- Temos um Float chamado pFlutuante localizado no endereço 1000 da memória.
   		- Então o tipo é Float, de nome pFlutuante, no endereço 1000,1001,1002 e 1003.

- Tamanho de variáveis:
	- int - ocupa 4 bytes na memória
	- float - ocupa 4 bytes na memória
	- double -
	- char - 

## PONTEIROS

Ponteiro é uma variável que armazena o endereço de memória de outra variável
1. TIPO: pointer / hexadecimal
2. NOME: ptr
3. LOCAL: ???
4. VALOR: 0x7ff... 

- Declaração:
	- tipo *nome_do_ponteiro;
   		- ex: int *ptr;

- Tem que apontar para algum lugar
  	- ex do prof: ptr = &numero;
  	  
- Um ponteiro armazena o endereço de memória de uma variável. Isso é obtido usando o operador de endereço (&)

- Quando não souber para onde o ponteiro está apontando, o ponteiro deve estar apontando para nulo = NULL;, se não for utilizar ele imediatamente também será apontado para nulo.
  	- ex: ptr = NULL;
	- Um ponteiro apontado para nulo não tem a parte de valor, pois ele nao aponta para nenhum endereço na memória.

- Tipos de ptr:
	- ptr - fazendo menção a aquela area de ponteiro
	- *ptr - permite obter o valor armazenado na memória em um endereço específico

## ALOCAÇÃO DINÂMICA DE MEMÓRIA

- Quando estiver alocando memória, vou explicitamente demandar um buffer de memória, que acontece no Heap da máquina
- Tudo que alocarmos no heap, vamos desalocar, pois não existe um modo automático de fazer isso
- Se não limpar o heap antes de mudar onde o ponteiro está (utilizando malloc ou calloc), vai virar lixo 
	- Ex: `` int *vet = (int*)malloc(sizeof(int)*10000); vet = NULL; ``
		- Definiu o vetor para nulo, deixando o lixo alocado no heap, mas você não saberá aonde ele está, podendo causar crash ao acumulá-lo. 

- Funções:
	- size_t: indica o tamanho do dado, uma quantidade de dados que está passando pro alloc
	- sizeof: retorna a quantidade de dado necessária para aquele tipo de dado (ex: size_of int retorna 4 bytes) 

- Funções para alocar dinamicamente um Heap:
	- Malloc: retorna um ponteiro genérico (pois funciona para qualquer tipo de dados (int, double, char...)) 
		- Declaração para formatar para o tipo de dado que quero (a forma da linguagem C alocar vetores dinâmicos) : tipo do dado *nome = (tipo do dado *) malloc(sizeof(tipo do dado) * tamanho); 
		- EX: `int *vet = (int*)malloc(sizeof(int)*10000); -> 40 mil bytes, pois 4 x 10000 = 40000bytes`
 
	- Calloc: também retorna um ponteiro genérico, mas espera que passe 2 parâmetros: quantidade de elementos que você quer alocar e o tamanho dos elementos.
		- Depois que você alocar a memória, ele vai preencher ela (por exemplo, ele preenche as células com 0 se você não preencher)
		- Declaração: tipo do dado * nome = (tipo do dado *) calloc (tamanho, sizeof(tipo do dado));

- Função para desalocar um Heap:
	- free: libera o heap
		- Declaração: void free(void* ptr);
		- EX: `int *vet = (int*)malloc(sizeof(int)*10000); free(vet); -> Limpou o Heap vet = NULL; -> Definiu o vetor para nulo, limpando a memória, sem causar crash`
	 
>> malloc, calloc e free estão na biblioteca #include <stdlib.h> 

- Operadores em c++
	- new: malloc
	- delete: free

- Slides de exemplos:
	- Vetores desordenados:
		- exclusão: exclui o último elemento
		- exclusão de elementos qualquer: passa o último valor para a posição a ser excluída.
		- inclusão: fazer um algoritmo de deslocamento, o 40 pra posição 3, 20 para a 2 e o 15 inserido na posição 1.

	- Vetores ordenados:
		- inclusão: insere na posição 1, passando os valores para a próxima casa (o valor 15 é inserido na 1, o 20 passa pra 2 e o 40 passa para a 3.)
		- exclusão: exclui o elemento da posição 1, deslocando todos os elementos uma casa ao lado (excluindo o 20 da posição 1, o 40 passa para a 1, 50 para a 2 e 60 para a 3.)
