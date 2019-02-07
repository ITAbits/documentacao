#include <stdio.h>

void hanoi(int n, int inicio, int meio, int fim){
    if (n >= 1){
        hanoi(n - 1, inicio, fim, meio);
        printf("Move %d da torre %d para a torre %d\n", n, inicio, fim);
        hanoi(n - 1, meio, inicio, fim);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    hanoi(n, 1, 2, 3);
    return 0;
}
