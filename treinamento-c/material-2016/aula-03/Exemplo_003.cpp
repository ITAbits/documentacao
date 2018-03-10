///Fazendo um classico: Jogo da Velha!!!!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char jogo [3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int jogador = 1, linha, coluna;
    bool deuVelha = false;
    bool venceu_1 = false;
    bool venceu_2 = false;

    while (!deuVelha && !venceu_1 && !venceu_2)
    {
        printf("JOGO DA VELHA\n\n");
        for (int i = 0; i <= 2; i++)
        {
            for(int j = 0; j<=2; j++)
                printf("|%c", jogo[i][j]);
            printf("|\n");
        }
        printf("\n");

        printf("Digite a linha e a coluna que deseja jogar: ");
        scanf("%d %d", &linha, &coluna);
        linha--;
        coluna--;
        if (jogador == 1)
            jogo[linha][coluna] = 'o';
        else
            jogo[linha][coluna] = 'x';
        jogador = 3 - jogador;
        system("cls");

        for (int i = 0; i<=2; i++)
        {
            if (jogo[i][0] != ' ' && jogo[i][0] == jogo [i][1] && jogo[i][1] == jogo[i][2])
            {
                if (jogo[i][0] == 'o')
                    venceu_1 = true;
                else
                    venceu_2 = true;
            }
            else if (jogo[0][i] != ' ' && jogo[0][i] == jogo [1][i] && jogo[1][i] == jogo[2][i])
            {
                if (jogo[0][i] == 'o')
                    venceu_1 = true;
                else
                    venceu_2 = true;
            }
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for(int j = 0; j<=2; j++)
            printf("|%c", jogo[i][j]);
        printf("|\n");
    }

    if (deuVelha)
        printf("Deu velha\n");
    else if (venceu_1)
        printf("Jogador 1 venceu\n");
    else
        printf("Jogador 2 venceu\n");
    return 0;
}
