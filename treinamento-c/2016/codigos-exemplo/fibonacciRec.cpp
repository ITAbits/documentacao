#include <stdio.h>

/// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, ...

/// NÂO é um bom exempo de recursão. Um numero é calculado várias vezes.

/*
            5
    3               4
1       2       2       3
                    1       2

*/

int Fibonacci(int n){
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("F(%d) = %d\n", n, Fibonacci(n));
    return 0;
}
