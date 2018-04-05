#include <utility> // pair está aqui
#include <iostream> //cout cin
#include <queue> 
#include <functional>
#include <set>
#include <map>
#include <string>

#define nd second
#define st first

using namespace std;

int main(){
	pair<int, int> par; //Declaracao de um par
	priority_queue<int> pq; //Declaracao de uma priority queue
	priority_queue<int, vector<int>, greater<int> > pq2; //priority queue que ordena ao contrario

	string palavrinha = "oi"; //Exemplo de string em C++

	set<int> grupo; //Declaracao de um set

	map<string, int> mapa; //Declaracao de um map onde a key é uma string e a informação é um int

	mapa.insert(make_pair("eae", 0)); //Acidiona um par onde a key é "eae" e a informação é 0
	mapa["forca jovem"] = 10; //Outra maneira de adicionar uma key e uma informação
	// mapa.erase(2); //Método para apagar um par. O Argumento da função é a key

	map<string, int>::iterator it; //Iterator de um mapa, usado para percorrer os elementos de um mapa
	for(it = mapa.begin(); it != mapa.end(); it++){
		cout << (*it).st << " " << it->nd << endl; //Como acessar os valores apontados pelo iterator
	}

	cout << mapa["ea"] << endl;

	grupo.insert(22); //Adicionando elementos no grupo
	grupo.insert(10); //O(log(n))
	grupo.insert(19);
	grupo.insert(19);
	grupo.insert(19);

	//grupo.erase(19);

	if(grupo.find(19) != grupo.end()){ //Como ver se um elemento está no grupo
		cout << "Achou\n";		
	}

	set<int>::iterator it2; //Declaração de um iterator para um set

	for(it2 = grupo.begin(); it2 != grupo.end(); it2++){
		cout << *it2 << " "; //Como obter o valor de um elemento apontado pelo iterator
	}
	cout << endl;

	cout << grupo.count(19) << endl; //Conta a quantidade de vezes que um elemento aparece num set
 	//No caso do set, o resultado é sempre 1  ou 0

	pq.push(10); //Inserindo elementos na priority-queue
	pq.push(19);
	pq.push(22);

	cout << pq.top() << endl; //Acessando o elemento do topo da priority_queue

	pq.pop(); //Deletando o elemento do topo da priority_queue
 	// pq.empty(), pq.size() // Métodos para ver se a pq está vazia e o seu tamanho

	cout << pq.top() << endl;

	par.first = 10;
	par.second = 19; //Definindo valores de um par

	par = make_pair(10, 22); //Outra maneira de definir o valor de um par

	cout << par.first << " " << par.second << endl; //Acessando os valores de um par
}