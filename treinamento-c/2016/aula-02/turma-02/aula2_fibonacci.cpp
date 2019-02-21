#include <stdio.h>

/// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, ...

int main(){
    int n, f1 = 0, f2 = 1, aux;
    /// f2 representa o numero de fibonacci procurado, enquanto que f1 eh um auxiliar que representa o numero anterios
    /// f1 e f2 vao "percorrendo" os numeros da sequencia ate que f2 chegue no n-esimo
    scanf("%d", &n);
    for (int i = 1; i < n; i++){
        aux = f1 + f2;
        /// A ordem dessas atribuições é importante
        f1 = f2;
        f2 = aux;
    }
    printf("F(%d) = %d\n", n, f2);
    return 0;
}
