#include <stdio.h>

int main()
{
    int num1, opcao;
    bool ehPar;
    float x, y, z;

    ///Maneira 01: condicao?opcao1:opcao2, se a condicao for verdade atribui-se a variavel o valor da opcao1, se nao o da opcao2
    printf("Digite o numero que voce deseja saber se eh par ou impar: ");
    scanf("%d", &num1);
    ehPar = (num1%2 == 0) ? true:false; ///se o numero for par, ehPar = true, se o numero nao for par, ehPar = false
    if (ehPar)
        printf("Eh par\n\n");
    else
        printf("Nao eh par\n\n");

    ///Maneira 02: switch - bizu para muitos encadeamentos de if, else if e else em que apenas se altera o valor de uma variavel
    printf("Digite a opcao que voce quer\n1 - Para somar\n2 - Para multiplicar\nQualquer outro - Para dividir\nOpcao: ");
    scanf("%d", &opcao);
    printf("Digite os numeros com os quais voce deseja operar: ");
    scanf("%f %f", &x, &y);

    ///Nao declarem a variavel no meio do codigo!!! Fiz isso apenas para dar destaque a informacao
    const int valor1 = 1; ///para usar no switch, a variavel tem que ser declarada como constante, ou seja, acrescente const
                          ///antes do tipo dela, por exemplo, const int ou const float

    ///abaixo uso break, ficará mais claro na parte de loops, mas explicando: nao eh necessario, apenas para evitar que todos
    ///os outros caso sejam verificados, ou seja, forca a saida do switch, quando o caso desejado for encontrado, poupando tempo.
    ///Pode ser usado em qualquer loop, porem so eh boa pratica de programacao quando usado no switch

    switch(opcao)
    {///se a opcao for correspondente a qualquer um dos casos, ele faz a operacao a frente
        case valor1: z = x + y; break;
        case 2: z = x * y; break;
        default: z = x / y; ///equivalente a um else, se nenhum dos casos for o correspondente, executa-se essa acao
    }
    printf("Valor final: %.2f\n",z);

    return 0;
}
