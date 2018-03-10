#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int1,int2;
    float num1,num2;
    float resposta;
    char operacao;
    char ehInteiro;
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    printf("Digite qual operacao voce deseja fazer:\n+ para somar\n- pra subtrair\nx pr multiplicar\n"
           "/ pra dividir\nr pra calcular o resto\n");
    ///Ta com buffer do enter, tres opcoes: padrao fflush(stdin), por um espaco antes do %c ou por o '\n'
    scanf(" %c", &operacao);
    if (operacao == '+')
    {
        resposta = num1 + num2;
    }
    else if (operacao == '-')
    {
        resposta = num1 - num2;
    }
    else if (operacao == 'x')
    {
        resposta = num1 * num2;
    }
    else if (operacao == '/')
    {
        resposta = num1 / num2;
    }
    else if (operacao == 'r')
    {
        printf("Seus numeros sao inteiros? Digite s para sim e n para nao\n");
        scanf(" %c", &ehInteiro);
        if (ehInteiro == 'n')
        {
            printf("Digite dois novos numeros que sejam inteiros: ");
            scanf("%d %d", &int1, &int2);
        }
        int1 = num1;
        int2 = num2;
        resposta = int1 % int2;
    }
    if (operacao != 'r')
        printf("A resposta eh: %.2f\n",resposta);
    else
        printf("A resposta eh: %.0f\n", resposta);
    return 0;
}
