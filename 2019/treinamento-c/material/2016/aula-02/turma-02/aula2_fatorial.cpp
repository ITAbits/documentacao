#include <stdio.h>

/// Fatorial
/// Com while

int main(){
    int x, fatorial = 1;
    scanf("%d", &x);
    while(x > 1){
        /// Multiplica o fatorial pelo numero x e decresce um de x, fazendo isso ate x chegar em 1
        ///fatorial = fatorial * x;
        fatorial *= x;
        x--;
    }
    printf("%d\n", fatorial);
    return 0;
}
