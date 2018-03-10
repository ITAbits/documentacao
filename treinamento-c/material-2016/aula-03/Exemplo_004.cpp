///URI 1029
#include <stdio.h>

int main()
{
    int tot,n;
    int fibn2, fibn1, fibn;
    int chamn2, chamn1, chamn;
    scanf("%d", &tot);
    for (int  i = 1; i <= tot; i++)
    {
        scanf("%d", &n);
        if (n == 0 || n == 1)
            printf("fib(%d) = 0 calls = %d\n",n,n);
        else
        {
            fibn2=0;
            fibn1=1;
            chamn2=0;
            chamn1=0;
            for (int i = 2; i <= n; i++)
            {
                fibn = fibn1 + fibn2;
                fibn2 = fibn1;
                fibn1 = fibn;
                chamn = 2 + chamn1 + chamn2;
                chamn2 = chamn1;
                chamn1 = chamn;
            }
            printf("fib(%d) = %d calls = %d\n",n,chamn,fibn);
        }
    }
    return 0;
}
