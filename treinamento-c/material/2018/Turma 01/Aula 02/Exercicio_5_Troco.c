/**
  * Nesse problema um valor deve ser retornado como
  * troco com o menor número de notas possível.
  */

//Inclusão das bibliotecas
#include<stdio.h>

//Função Principal de um Programa em C
int main()
{
    float valor;
    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda100, moeda50, moeda25, moeda10, moeda5, moeda1;
    int totalNotas, totalMoedas;

    //Inincialização das variáveis (Sem essa etapa o programa não funcionaria corretamente!)
    nota100 = nota50 = nota20 = nota10 = nota5 = nota2 = 0;
    moeda100 = moeda50 = moeda25 = moeda10 = moeda5 = moeda1 = 0;

    //Leitura do valor
    printf("Digite um valor monetario com duas casas decimais:");
    scanf("%f", &valor);

    /**
      * Devemos sempre tentar retorna a nota/moeda de maior valor possível.
      * Para testar todas as possibilidades vamos dividir em sequência
      * pelos números dos maiores para os menores, atualizando a variável valor
      * após cada divisão.
      *
      */

    if(valor >= 100)
    {
        nota100 = valor/100;
        valor = valor - 100*nota100;
    }

    if(valor >= 50)
    {
        nota50 = valor/50;
        valor = valor - 50*nota50;
    }

    if(valor >= 20)
    {
        nota20 = valor/20;
        valor = valor - 20*nota20;
    }

    if(valor >= 10)
    {
        nota10 = valor/10;
        valor -= 10*nota10; //Note que escrever "valor -= 10*moeda10" equivale a "valor = valor - 10*moeda10"!
    }

    if(valor >= 5)
    {
        nota5 = valor/5;
        valor = valor - 5*nota5;
    }

    if(valor >= 2)
    {
        nota2 = valor/2;
        valor = valor - 2*nota2;
    }

    if(valor >= 1)
    {
        moeda100 = (int) valor; //Colocar o (int) converte explicitamente o valor da variável 'float' para 'int'
        valor = valor - moeda100;
    }

    if(valor >= 0.5)
    {
        moeda50 = valor/0.5;
        valor = valor - 0.5*moeda50;
    }

    if(valor >= 0.25)
    {
        moeda25 = valor/0.25;
        valor = valor - 0.25*moeda25;
    }

    if(valor >= 0.1)
    {
        moeda10 = valor/0.1;
        valor = valor - 0.1*moeda10;
    }

    if(valor >= 0.05)
    {
        moeda5 = valor/0.05;
        valor = valor - 0.05*moeda5;
    }

    if(valor >= 0.01)
    {
        moeda1 = valor/0.01;
        valor = valor - 0.01*moeda1;
    }

    //Cálculo do total de notas e moedas

    totalNotas = nota100 + nota50 + nota20 + nota10 + nota5 + nota2;
    totalMoedas = moeda100 + moeda50 + moeda25 + moeda10 + moeda5 + moeda1;

    //Impressão dos resultados
    printf("\nPara decompor esse valor serao necessarias: %d notas e %d moedas ",
           totalNotas, totalMoedas);

    printf("\n %4d nota(s) de 100 reais.", nota100);
    printf("\n %4d nota(s) de  50 reais.", nota50);
    printf("\n %4d nota(s) de  20 reais.", nota20);
    printf("\n %4d nota(s) de  10 reais.", nota10);
    printf("\n %4d nota(s) de   5 reais.", nota5);
    printf("\n %4d nota(s) de   2 reais.", nota2);
    printf("\n %4d moeda(s) de 1 real.", moeda100);
    printf("\n %4d moeda(s) de 50 centavos.", moeda50);
    printf("\n %4d moeda(s) de 25 centavos.", moeda25);
    printf("\n %4d moeda(s) de 10 centavos.", moeda10);
    printf("\n %4d moeda(s) de  5 centavos.", moeda5);
    printf("\n %4d moeda(s) de  1 centavos.", moeda1);

    return 0;
}
