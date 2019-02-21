///Problema do Josephus Flavius - URI 1030

#include <stdio.h>

int main()
{
    int nc, n, k;
    int jn, jn1;
    scanf("%d", &nc);
    for (int i = 1; i <= nc; i++)
    {
        jn1 = 1;
        scanf("%d %d", &n, &k);
        if (n == 1)
            printf("Case %d: %d\n", i,jn1);
        else
        {
            for (int m = 2; m<=n; m++)
            {
                jn = (jn1 + k - 1) % m + 1;
                jn1 = jn;
            }
            printf("Case %d: %d\n",i,jn);
        }
    }
    return 0;
}
