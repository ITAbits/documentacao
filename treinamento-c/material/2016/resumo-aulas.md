# Resumo das aulas - Treinamento C 2016

## AULA 1

- Bibliotecas:
	stdio.h - Standard Input and Output Library
	stdlib.h - Aloca��o de mem�ria din�mica, aritmetica de inteiros (abs), system("cls"), numeros aleat�rios)
	math.h - Opera��es matematicas (cos, sin, exp, log, sqrt, pow, fabs)
	string.h - Opera��es com string (strlen, strcmp, strcmpi, strcpy, strcat)
	ctype.h - Opera��es com caracteres (tolower, toupper)

- Declara��o de vari�veis:
	Declara��o global e local
	Endere�o das vari�veis
	Tipos de dados (int, float, double, long long, char, bool)
	Atribui��o de valores as vari�veis (=)

- Comandos de fluxo de dados:
	scanf
	printf
	getchar
	Buffer do teclado - fflush(stdin)

- Opera��es aritm�ticas
	+ - * % /
	+= -= /= *=
	++ -- (antes e depois)

- Comandos condicionais
	if, else if, else
	Compara��o (> < >= <= == !=)
	Operadores l�gicos (&& || !)
	Express�o condicional (condicao ? op��o1 : op��o2)

- Exerc�cios
	Hello World
	Exemplos com entrada e sa�da
	Exemplo com buffer do teclado
	Calculadora

## AULA 2

- D�vidas da aula anterior

- Comandos condicionais (Continua��o):
	Switch case

- Comandos iterativos (loops)
	Cuidados com loops infinitos

- For
	Estrutura do for: (inicializa��o; condi��o; itera��o)
	Comentar quando nao tem algum dos parametros
	Chaves

- While e Do While
	Estrutura do while
	Diferen�a: while e do while

## AULA 3

- Vari�veis indexadas

- Arrays (vetores):
	Come�a no 0
	Declara��o
	Atribui��o de valores na declara��o (apenas na declara��o)
		vetor[4] = {1, 2, 3, 4};
		vetor[4] = {1, 2};
		vetor[4] = {0};
	Tamanho deve ser um numero, n�o uma variavel!
	Como acessar
	Cuidado para acessar posi��es fora dos limites

- Matrizes:
	Mais de uma "dimens�o"
	Declara��o
	Atribui��o de valores na declara��o (apenas na declara��o)
		matriz[3][3] = {
			{1, 2, 3},
			{1, 2},
			{1}
		};

- Exerc�cios:
	Revis�o de comandos iterativos (calcular n�mero de euler)
	Nota dos alunos e media da turma
	Opera��es com matrizes:
		Receber uma matriz
		Somar matrizes
		Determinar transposta
		Multiplicar matrizes
	Batalha naval

## AULA 4

- Strings:
	Declara��o (a inicializa��o so funciona na declara��o)
	Armazenamento (Explicar sobre o '\n')
	'a' diferente de "a"
	Escrita (printf com %s)
	Leitura
		scanf: n�o precisa do &, para de ler com enter ou espa�o
		gets: ler com espa�os, pega a linha inteira
	Biblioteca <string.h>

- Fun��es:
	strcpy(a, b): copia a string b para a
	strlen(a): retorna o tamanho de a (sem o \0)
	strcat(a, b): concatena as string a e b e guarda em a
	strcmp(a, b): compara lexicograficamente (como em um dicionario) duas string e retorna um numero
		0: strings iguais
		< 0: primeira � menor 
		> 0: primeira � maior
	strcmpi(a, b): o mesmo da strcmpi, porem n�o � case-sensitive (difere mai�sculas de min�sculas)
	itoa: converte int para string
	atoi: converte string para int
	atof: converte string para float

Exerc�cios:
	Exemplos das fun��es
	Exemplos de entrada e saida
	Contar quantas vezes um caractere espec�fico aparece
	Transformar toda a string em mai�scula/min�scula
	Determinar o tamanho da palavra mais longa de uma frase

## AULA 5

FUN��ES (Subprograma��o)

Utilidade:
	- Elimina��o de repeti��o de c�digo, para processos que precisar�o ser usados mais de uma vez.
	- Maior organiza��o.
	- Realizar opera��es espec�ficas.
	- �til para recurs�o.

Escopo de vari�vel:
	- Vari�vel global: declarada fora de fun��es e podem ser acessadas por qualquer outra fun��o abaixo.
	- Vari�vel local: declarada dentro de uma fun��o e s� podem ser usadas dentro dela.
	- Vari�vel local tem prefer�ncia sobre vari�vel global.
	- Passagem de par�metros por valor: � passado apenas o valor da vari�vel, criando uma outra vari�vel local, e altera��es nela n�o mudam a vari�vel original.
	- Prot�tipos de fun��es.

- Recursividade:
	- Quando uma fun��o chama ela mesma pra resolver algum problema.
	- Semelhante a recorr�ncia na matem�tica.
	- Deve retornar a solu��o de um caso simples, para parar a recurs�o.
	- A recurs�o deve se aproximar desse caso simples. Cuidado para loops infinitos.
	- Em problemas recursivos, casos maiores do problema dependem da resposta de casos menores.
	- Forma uma pilha de execu��o, onde uma fun��o aguarda o retorno da fun��o que chamou para continuar sua opera��o.

Exerc�cios:
	- Calcular dist�ncia entre dois pontos
	- Calcular pot�ncia de um numero recursivamente
	- Fatorial Recursivo
	- Fibonacci Recursivo (comentar que n�o � eficiente)
	- Torre de Hanoi

## AULA 6

Define:
	- Ex: #define PI 3.1415
	- N�o ocupa valor na mem�ria.
	- Seu valor � substituido antes da compila��o.
	- N�o s�o vari�veis.

Typedef:
	- Redefine o nome de um tipo de dados.
	- Ex:
		typedef int numero
		typedef vetor int[]
		typedef matriz vetor[]

Tipo Enumerativos (Enum):
	- Declara um novo tipo de dador e valores a serem atribu�dos as vari�veis desse tipo.
	- Ex:
		enum nivel {facil, medio, dificil};
		enum nivel jogo = dificil;
		enum diaSemana {dom, seg, ter, qua, qui, sex, sab};
		enum diaSemana hoje, amanha = ter;
	- Em C, a palavra enum � obrigat�ria na declara��o. Pode-se elimin�-lo com um typedef. Em C++ n�o ocorre isso.
	- Os identificadores s�o constantes inteira (0, 1, ...) e n�o podem ser alterados em tempo de execu��o.
	- Pode-se atribuir valores as constantes, seguindo a sequ�ncia.
		enum diaSemana {dom, seg=3, ter, qua, qui=10, sex, sab};

Estruturas n�o homog�neas (Structs):
	- Agrupa v�rias informa��es em um novo tipo.
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
	- Em C, a palavra struct � obrigat�ria na declara��o. Pode-se elimin�-lo com um typedef. Em C++ n�o ocorre isso.
	- O acesso � feito atrav�s de um operador ponto.
	- Pode ser inicializada com os valores na ordem correta.
	- � poss�vel atribuir uma struct para outra diretamente.
	- � poss�vel fazer fazer vetores e matrizes dessas estruturas.