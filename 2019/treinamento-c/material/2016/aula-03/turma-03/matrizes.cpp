#include <stdio.h>

int main(){
    int arow, acol;
    int brow, bcol;

    int a[105][105];
    int b[105][105];
    int c[105][105];

    do{
        scanf ("%d %d %d %d", &arow, &acol,
                              &brow, &bcol);
    } while (acol != brow);

    for (int row=1; row<=arow; row++)
        for (int col=1; col<=acol; col++)
            scanf ("%d", &a[row][col]);

    for (int row=1; row<=brow; row++)
        for (int col=1; col<=bcol; col++)
            scanf ("%d", &b[row][col]);

    for (int row=1; row<=arow; row++){
        for (int col=1; col<=bcol; col++){

            c[row][col] = 0;
            for (int i=1; i<=acol; i++)
                c[row][col] +=
                    a[row][i] * b[i][col];

        }
    }

    for (int row=1; row<=arow; row++){
        for (int col=1; col<=bcol; col++)
            printf ("%d ", c[row][col]);

        printf ("\n");
    }

    return 0;
}
