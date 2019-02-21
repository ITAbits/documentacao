#include <stdio.h>
#include <string.h>

typedef struct Endereco Endereco;
struct Endereco{
    char rua[50];
    int numero;
};

typedef struct Pessoa Pessoa;
struct Pessoa{
    char nome[30];
    int idade;
    Endereco casa;
};

int main(){
    int a;
    Endereco minha_casa = {"Rua H8C", 325};
    Pessoa eu;
    strcpy(eu.nome, "Gabriel");
    eu.idade = 19;
    eu.casa = minha_casa;
    Pessoa amigos[100];
    /*
    eu.casa.numero = 325;
    strcpy(eu.casa.rua, "Rua H8C");
    amigo[1] = eu;
    printf("%s\n", amigo[i]);
    */
    printf("Nome: %s\nIdade: %d\nRua: %s\nNumero: %d", eu.nome, eu.idade, eu.casa.rua, eu.casa.numero);
    return 0;
}
