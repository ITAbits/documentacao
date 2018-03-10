///Dado um n (vc digita lá em baixo no a, ou adapta pra pedir ao usuario) imprimir n n-1 n-2 ... 2 1 1 2 3 ... n-1 n
#include <stdio.h>
#include <stdlib.h>

void imprimir (int i, int n)
{
    if (i != 0)
        printf("%d ", abs(i));
    if(i > -1*n)
        imprimir(i-1,n);
}
int main()
{
    int a = 15;
    imprimir(a,a);
    return 0;
}
