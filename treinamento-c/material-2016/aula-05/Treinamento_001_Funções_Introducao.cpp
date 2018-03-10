///Ate agr todos os nossos comandos eram executados na main, na ordem que eram escritos, de modo que o codigo por vezes ficava
///desorganizado (em alguns casos, levemente incompreensivel) por nao ser tao claro o que cada parte do codigo fazia, e veja bem,
///todos os codigos do treinamento sao pequenos, imagine um codigo de 10000 linhas (sim, a ITAndroids tem codigos desse tamanho,
///caso sejam somadas todas as partes), seria quase impraticavel de outra pessoa, alem do programador original conseguir auxilia-lo
///a encontrar um erro (bug) ou algo assim. Alem disso, vcs devem ter notado que algumas partes do codigo eram executadas mais de
///vez, de forma que tinhamos que codifica-las o numero de repeticoes em que aparecessem, o que eh extremamente custoso (tempo)
///alem de, eventualmente, complicar a compreensao do codigo e, rapidamente, aumentar o seu tamanho. Vamos aprender hoje uma nova
///ferramenta que resolve os problemas acima, alem de ser muito versatil e ter outras funcionalidades em geral: funcoes!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Declarando uma funcao: (isso mesmo, fora da main, vc nao esta errando)
///Sintaxe: tipo(int, float, char, void) nome parametros (tipo nomeDoParametro)

float calcularMedia (float a, float b) ///funcao retorna algum valor
{
    float media = (a+b)/2;
    return media;
}

char primeiraLetra (char palavra[]) ///funcao com retorno
{
    char caractere = palavra[0];
    if (palavra[0] == '\0')
        caractere = ' ';
    palavra[0] = '*';
    return caractere;
}

void imprimirMedia(float a, float b) ///funcao void, executa atividades, porem nao retorna valores
{
    printf("A media entre a e b eh: %.2f\n", (a+b)/2);
}

bool ehPalindromo (char numero[20]) ///funcao bool, retorna true ou false
{
    bool resposta = true;
    for (int i = 0; i <= (strlen(numero)-1)/2 && resposta; i++)
    {
        if (numero[i] != numero[strlen(numero)-1-i])
            resposta = false;
    }
    return resposta;
}

void imprimirMenu()
{
    system("cls");
    printf("MENU DE TAREFAS\n\n");
    printf("1)Calcular media aritmetica com funcao com ponto de retorno\n2)Ver o primeiro caractere de uma plavra digitada\n3)Calcular media aritmetica com funcao sem pontos de"
           "retorno\n4)Ver se um numero eh palindromo\n5)Sair\n\nOpcao: ");
}

///OBSERVACAO IMPORTANTE, A NAO SER EM RECURSAO, SE SUA FUNCAO RETORNAR ALGUM VALOR, TENTE FAZE-LA COM APENAS UM PONTO DE RETORNO,
///OU SEJA, A PALAVRA return DEVE APARECER APENAS UMA VEZ

int main()
{
    int opcao = 10;
    float a,b, media;
    char letra;
    char palavra[50], numero[20];
    while (opcao != 5)
    {
        imprimirMenu(); ///usando a quinta funcao
        scanf("%d", &opcao);
        system("cls");

        if (opcao == 1 || opcao == 3)
        {
            printf("Digite dois numeros e vc recebera suas medias aritmeticas");
            scanf("%f %f", &a, &b);
            if (opcao == 1) ///Usando a primeira funcao:
            {
                media = calcularMedia(a,b);
                printf("Media = %.2f\n", media);
            }
            else ///Usando a terceira funcao:
                imprimirMedia(a,b);
        }
        else if (opcao == 2) ///Usando a segunda funcao
        {
            printf("Digite uma palavra e vc tera a primeira letra dela: ");
            scanf ("%s", palavra);
            letra = primeiraLetra(palavra);
            printf("Nova primeira letra: %s\n", palavra);
            printf("A primeira letra eh: %c\n", letra);
        }
        else if (opcao == 4) ///Usando a quarta funcao
        {
            printf("Digite o numero que vc deseja saber se eh palindromo: ");
            scanf("%s", numero);
            switch(ehPalindromo(numero))
            {
            case 0: printf("Nao eh palindromo\n"); break;
            default: printf("Eh palindromo\n");
            }
        }
        system("PAUSE");
    }
    return 0;
}

