#include <stdio.h>

int main()
{
    int num1, num2;

    ///Para relembrar, como relacionar duas condicoes no if? && ou ||

    ///1) && - Relacionando a divisibilidade por 6, com a divisibilidade por 2 e por 3
    printf("Digite o numero que vc deseja saber se eh divisivel por 6: ");
    scanf("%d", &num1);
    if (num1 % 2 == 0 && num1 % 3 == 0)
        printf("%d eh divisivel por 6\n\n", num1);
    else
        printf("%d nao eh divisivel por 6\n\n", num1);

    ///2) || - Exercicio anos bissextos
    printf("Digite o ano que voce deseja saber se eh bissexto: ");
    scanf("%d", &num2);
    if ( ( num2%4 == 0 && num2%100 != 0) || num2%400 == 0)
        printf("%d eh bissexto\n", num2);
    else
        printf("%d nao eh bissexto\n", num2);

    return 0;
}
