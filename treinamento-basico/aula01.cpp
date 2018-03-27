/// Treinamento Básico de Algoritmos
/// Aula 01
/// Prof.: Guima
/// Auxiliar: Chico

/// Como agora vamos usar alguns recursos de C++ para facilitar nossa vida, devemos incluir essa biblooteca
#include <bits/stdc++.h>

/// Alternativamente, poderíamos apenas ter dado include na biblioteca da estrutura de dados que nos interessa, como
// #include <queue> -> Para usarmos filas
// #include <stack> -> Para usarmos pilhas

/// Tendo incluído a biblioteca stdc++.h, devemos invocar o namespace std, para "dizer de onde estamos tirando essas funções"
using namespace std;

/* Nota:
Um espaço de nomes ("namespace" em inglês) é um delimitador abstrato (container) que fornece um contexto para os itens que ele
armazena (nomes, termos técnicos, conceitos, etc).
Isso permite uma desambiguação para itens que possuem o mesmo nome.
Como um contexto distinto é fornecido para cada container, o significado de um nome pode variar de acordo com o namespace
o qual ele pertence.
Por definição, dois conceitos de um namespace não podem compartilhar o mesmo nome.

Testículo retirado de: https://www.conhecimentogeral.inf.br/namespace/
 */

/// Uma vez dado os includes necessários, podemos declarar nossas estruturas da seguinte forma
queue<int> fila;         // Uma fila de inteiros
stack<float> pilha;      // Uma pilha de floats
vector<double> arr;      // Um array (vetor) de doubles
deque<char> deck;        // Um deque de chars

int main(){

   	/// Podemos colocar nossos elementos na fila da seguinte forma
	fila.push(10);
	fila.push(19);
	fila.push(22);

	/// Analogamente, retiramos o primeiro elemento da fila (que é o 10, no caso), já que filas são estruturas do tipo FIFO
	fila.pop();

	/// Podemos pegar o valor do atual primeiro elemento da fila (que é o 19, no caso) e utilizá-lo para alguma coisa
	int x = fila.front();

	/// Como estamos em C++, agora podemos printar valores tanto com o velho conhecido printf como dessa outra forma
	printf("%d\n", x);  // Printamos um inteiro recém declarado que recebeu o valor do atual primeiro da fila
	cout << x << endl;  // endl faz o papel de \n

	/// A lógica pra uma fila é análoga, pasta lembrar que o pop() vai retirar agora o último elemento adicionado,
	/// pois pilhas são estruturas de dados do tipo FILO
	pilha.push(10);
	pilha.push(19);
	pilha.push(22);
	pilha.pop();      // Retirou-se o 22 no caso, pois estava no topo da pilha. Agora quem está no topo é o elemento 19.

	/// Numa pilha, não se acessa o primeiro, agora o valor em "destaque" é o último adicionado, o que está no topo da pilha
	int y = pilha.top();
	cout << y << endl;

	/// Em se tratando de arrays, costuma-se trabalhar com uma estrutura mais "livre" de dados
	/// Contudo, para isso, é preciso se preocupar com a memória a ser utilizada (pra não explodir o seu computador!)
	/// Para "inicializar" uma array, primeiro dizemos quanto de memória queremos que ela reserve, ou seja,
	/// Quantos elementos o computador deve esperar que caibam nela
	arr.reserve(19);

	/// Para adicionarmos um novo elemento no final do vetor, depois do seu atual último elemento, faz-se
	arr.push_back(10);  // Adicionei o inteiro 10
	arr.push_back(19);  // Adicionei o inteiro 19 depois do inteiro 10
	arr.push_back(22);  // Adicionei o inteiro 22 depois do inteiro 19

	/// No final, o nosso vetor de 19 espaços apenas tem os seus três primeiros preenchidos com os valores 10, 19 e 22.
	/// As demais posições tem lixo (pode ser qualquer coisa)


   	/// Vamos printar tudo o que tem preenchido no nosso array
	for(int i = 0; i < arr.size(); i++){    // Note que arr.size retorna o número de elementos atualmente preenchidos do array
		cout << arr[i] << " ";          // Estou printando o i-ésimo valor do array e colocando um espaço em seguida
	}
	cout << endl;                           // Ao final, dou um \n pra ficar bonitinho


	/// Eu consigo ver facilmente se qualquer uma das minhas estruturas de dados está vazia ou não
	/// No caso da pilha, fica algo do tipo
	if(pilha.empty()){
		cout << "A pilha ta vazia\n";
	} else {
		cout << "Tem elementos na pilha\n";
	}

	/// Para maiores referências, não deixem de ver todas as funções bizuradas pra cada estrutura de dados que podem facilitar
	/// e muito a sua vida. Basta procurar no google, pois é difícil saber todas decoradas, realmente espera-se que você comece a
	/// procurar funções que você esteja atrás de usar nas documentações da linguagem. (http://www.cplusplus.com/, por exemplo)
}
