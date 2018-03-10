# Resumo das aulas - Treinamento C 2016

## AULA 1

- Bibliotecas:
	stdio.h - Standard Input and Output Library
	stdlib.h - Alocação de memória dinâmica, aritmetica de inteiros (abs), system("cls"), numeros aleatórios)
	math.h - Operações matematicas (cos, sin, exp, log, sqrt, pow, fabs)
	string.h - Operações com string (strlen, strcmp, strcmpi, strcpy, strcat)
	ctype.h - Operações com caracteres (tolower, toupper)

- Declaração de variáveis:
	Declaração global e local
	Endereço das variáveis
	Tipos de dados (int, float, double, long long, char, bool)
	Atribuição de valores as variáveis (=)

- Comandos de fluxo de dados:
	scanf
	printf
	getchar
	Buffer do teclado - fflush(stdin)

- Operações aritméticas
	+ - * % /
	+= -= /= *=
	++ -- (antes e depois)

- Comandos condicionais
	if, else if, else
	Comparação (> < >= <= == !=)
	Operadores lógicos (&& || !)
	Expressão condicional (condicao ? opção1 : opção2)

- Exercícios
	Hello World
	Exemplos com entrada e saída
	Exemplo com buffer do teclado
	Calculadora

## AULA 2

- Dúvidas da aula anterior

- Comandos condicionais (Continuação):
	Switch case

- Comandos iterativos (loops)
	Cuidados com loops infinitos

- For
	Estrutura do for: (inicialização; condição; iteração)
	Comentar quando nao tem algum dos parametros
	Chaves

- While e Do While
	Estrutura do while
	Diferença: while e do while

## AULA 3

- Variáveis indexadas

- Arrays (vetores):
	Começa no 0
	Declaração
	Atribuição de valores na declaração (apenas na declaração)
		vetor[4] = {1, 2, 3, 4};
		vetor[4] = {1, 2};
		vetor[4] = {0};
	Tamanho deve ser um numero, não uma variavel!
	Como acessar
	Cuidado para acessar posições fora dos limites

- Matrizes:
	Mais de uma "dimensão"
	Declaração
	Atribuição de valores na declaração (apenas na declaração)
		matriz[3][3] = {
			{1, 2, 3},
			{1, 2},
			{1}
		};

- Exercícios:
	Revisão de comandos iterativos (calcular número de euler)
	Nota dos alunos e media da turma
	Operações com matrizes:
		Receber uma matriz
		Somar matrizes
		Determinar transposta
		Multiplicar matrizes
	Batalha naval

## AULA 4

- Strings:
	Declaração (a inicialização so funciona na declaração)
	Armazenamento (Explicar sobre o '\n')
	'a' diferente de "a"
	Escrita (printf com %s)
	Leitura
		scanf: não precisa do &, para de ler com enter ou espaço
		gets: ler com espaços, pega a linha inteira
	Biblioteca <string.h>

- Funções:
	strcpy(a, b): copia a string b para a
	strlen(a): retorna o tamanho de a (sem o \0)
	strcat(a, b): concatena as string a e b e guarda em a
	strcmp(a, b): compara lexicograficamente (como em um dicionario) duas string e retorna um numero
		0: strings iguais
		< 0: primeira é menor 
		> 0: primeira é maior
	strcmpi(a, b): o mesmo da strcmpi, porem não é case-sensitive (difere maiúsculas de minúsculas)
	itoa: converte int para string
	atoi: converte string para int
	atof: converte string para float

Exercícios:
	Exemplos das funções
	Exemplos de entrada e saida
	Contar quantas vezes um caractere específico aparece
	Transformar toda a string em maiúscula/minúscula
	Determinar o tamanho da palavra mais longa de uma frase

## AULA 5

FUNÇÔES (Subprogramação)

Utilidade:
	- Eliminação de repetição de código, para processos que precisarão ser usados mais de uma vez.
	- Maior organização.
	- Realizar operações específicas.
	- Útil para recursão.

Escopo de variável:
	- Variável global: declarada fora de funções e podem ser acessadas por qualquer outra função abaixo.
	- Variável local: declarada dentro de uma função e só podem ser usadas dentro dela.
	- Variável local tem preferência sobre variável global.
	- Passagem de parâmetros por valor: é passado apenas o valor da variável, criando uma outra variável local, e alterações nela não mudam a variável original.
	- Protótipos de funções.

- Recursividade:
	- Quando uma função chama ela mesma pra resolver algum problema.
	- Semelhante a recorrência na matemática.
	- Deve retornar a solução de um caso simples, para parar a recursão.
	- A recursão deve se aproximar desse caso simples. Cuidado para loops infinitos.
	- Em problemas recursivos, casos maiores do problema dependem da resposta de casos menores.
	- Forma uma pilha de execução, onde uma função aguarda o retorno da função que chamou para continuar sua operação.

Exercícios:
	- Calcular distância entre dois pontos
	- Calcular potência de um numero recursivamente
	- Fatorial Recursivo
	- Fibonacci Recursivo (comentar que não é eficiente)
	- Torre de Hanoi

## AULA 6

Define:
	- Ex: #define PI 3.1415
	- Não ocupa valor na memória.
	- Seu valor é substituido antes da compilação.
	- Não são variáveis.

Typedef:
	- Redefine o nome de um tipo de dados.
	- Ex:
		typedef int numero
		typedef vetor int[]
		typedef matriz vetor[]

Tipo Enumerativos (Enum):
	- Declara um novo tipo de dador e valores a serem atribuídos as variáveis desse tipo.
	- Ex:
		enum nivel {facil, medio, dificil};
		enum nivel jogo = dificil;
		enum diaSemana {dom, seg, ter, qua, qui, sex, sab};
		enum diaSemana hoje, amanha = ter;
	- Em C, a palavra enum é obrigatória na declaração. Pode-se eliminá-lo com um typedef. Em C++ não ocorre isso.
	- Os identificadores são constantes inteira (0, 1, ...) e não podem ser alterados em tempo de execução.
	- Pode-se atribuir valores as constantes, seguindo a sequência.
		enum diaSemana {dom, seg=3, ter, qua, qui=10, sex, sab};

Estruturas não homogêneas (Structs):
	- Agrupa várias informações em um novo tipo.
	- Como se fosse um vetor, mas com tipos diferentes.
	- Ex:
		typedef enum sexo sexo;
		enum sexo {masculino, feminino};

		typedef struct Endereco Endereco;
		struct Endereco{
   			char rua[100], bairro[10];
   			int numero;
		};

		typedef struct Pessoa Pessoa;
		struct Pessoa{
   			char nome[100];
   			int idade;
   			sexo sex;
   			Endereco end;	
		};
	- Em C, a palavra struct é obrigatória na declaração. Pode-se eliminá-lo com um typedef. Em C++ não ocorre isso.
	- O acesso é feito através de um operador ponto.
	- Pode ser inicializada com os valores na ordem correta.
	- É possível atribuir uma struct para outra diretamente.
	- É possível fazer fazer vetores e matrizes dessas estruturas.