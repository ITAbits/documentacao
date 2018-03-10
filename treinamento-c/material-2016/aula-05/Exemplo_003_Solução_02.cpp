#include<stdio.h>

void funcao_recursiva(int n){
    if(n==0)
        return;
    printf("%d ",n);
    funcao_recursiva(n-1);
    printf("%d ",n);
}

int main()
{
    funcao_recursiva(23);
    return 0;    //...
}
