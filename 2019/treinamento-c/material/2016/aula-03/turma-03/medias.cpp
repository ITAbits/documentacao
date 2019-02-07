#include <stdio.h>

int main(){
    int n_alunos;
    double p1[100], p2[100], media[100];

    printf ("Numero de alunos: ");
    scanf ("%d", &n_alunos);

    for (int cont=0; cont<n_alunos; cont++){
        printf ("Nota da p1 do aluno %d: ", cont);
        scanf ("%lf", &p1[cont]);

        printf ("Nota da p2 do aluno %d: ", cont);
        scanf ("%lf", &p2[cont]);

        media[cont] = 0.5*(p1[cont] + p2[cont]);
    }

    for (int cont=0; cont<n_alunos; cont++){
        printf ("Aluno %d: ", cont);

        if (media[cont] >= 6.5)
            printf ("aprovado! %c\n", 1);
        else
            printf ("eita\n");
    }

    return 0;
}
