///Primeira coisa a se dizer, nenhum comando aprendido nesse codigo deve ser usado com frequencia, salvo a excecao do break no
///switch ja mostrada, sao todos mas praticas de programacao, e, portanto, nao devem ser utilizadas em labs no ITA (os profs
///nao permitem), nem em codigos da ITAndroids.
///Sendo mais especifico, eles sao muitissimo uteis e tentadores, porem no mundo real um codigo de um projeto de engenharia
///dificilmente sera escrito por apenas uma pessoa e esses comandos tornam muito complicada a compreensao do codigo por outras
///pessoas que estejam trabalhando no mesmo codigo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fatorial = 1;
    int i;
    bool flag = false;

    ///Comando 01: break - serve para sair de loops quando se alcanca uma condicao desejada, por exemplo: suponha que vamos
    ///calcular o fatorial de um numero, porem como temos um limite de tempo de compilacao, estabelecemos que caso o fatorial do
    ///numero passe de 1500, deve-se colocar apenas que o valor eh mto grande, veja o uso do break nesse caso:
    printf("Digite o numero que voce deseja calcular o fatorial: ");
    scanf ("%d", &num);
    printf("\nUSANDO BREAK:\n");
    for (i = 1; i <= num; i++)
    {
        if (fatorial > 1500)
            break;
        fatorial*=i;
    }
    if (i == num + 1) ///artificio para saber o loop chegou ao fim
        printf("Fatorial(%d) = %d\n\n", num, fatorial);
    else
        printf("O valor eh mto grande\n\n");
    system("PAUSE");

    ///Como fazer break sem usar o comando break? Modo elegante: definir uma flag!
    printf("\nUSANDO FLAG:\n");
    fatorial = 1;
    for (i = 1; i <= num && !flag; i++)
    {
        fatorial*=i;
        if (fatorial > 1500)
            flag = true;
    }
    if (i == num + 1)
        printf("Fatorial(%d) = %d\n\n", num, fatorial);
    else
        printf("O valor eh mto grande\n\n");
    system("PAUSE");

    ///COMANDO 02: goto - Quando usado, serve para redirecionar a execucao do programa para algum trecho qualquer do codigo
    ///Modo de usar: sinaliza-se uma parte do codigo com (palavra): e quando usar go to, colocar go to (palavra); Veja: o uso
    ///para o mesmo problema anterior.
    printf("\nUSANDO GOTO:\n");
    fatorial = 1;
    for (i = 1; i <= num; i++)
    {
        fatorial*=i;
        if (fatorial > 1500)
            goto inicio;
    }
inicio:
    if (i == num + 1)
        printf("Fatorial(%d) = %d\n", num, fatorial);
    else
        printf("O valor eh mto grande\n");
    system("PAUSE");

    ///COMANDO 03: continue - funciona apenas dentro de loops, ele funciona de modo semelhante a um goto que leva ao fim da
    ///iteracao, observe o exemplo a seguir: suponha que queremos imprimir os numeros de 0 a 10 sem imprimir o numero 5
    printf("\nUSANDO CONTINUE\n");
    for (int j = 0; j <= 10;  j++)
    {
        if (j == 5)
            continue;
        printf("j = %d\n", j);
    }
    system("PAUSE");

    ///O codigo acima funciona exatamente igual ao abaixo:
    printf("\nEXPLICANDO CONTINUE\n");
    for (int j = 0; j <= 10;  j++)
    {
        if (j == 5)
            goto fim;
        printf("j = %d\n", j);
        fim:;
    }
    system("PAUSE");
    ///Ou seja, enquanto o break forca a saida do loop, o continue forca a saida da iteracao

    return 0;
}

