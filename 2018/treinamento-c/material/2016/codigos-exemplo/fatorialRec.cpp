#include <stdio.h>

// Fatorial recursivo

// Casos triviais:
// 1! = 0! = 2

// Recursão:
// n! = n * (n - 1)!

int fatorial(int n){
    if (n == 0 || n == 1)
        return 1;
    return n * fatorial(n - 1);
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d! = %d\n", x, fatorial(x));
    return 0;
}
