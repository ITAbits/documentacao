#include <stdio.h>

/// Break eh usado para sair de loops (for e while) e do switch

int main(){
    int i;
    for (i = 0; i < 1000; i++){
        if (i == 100)
            break;
    }
    printf("%d\n", i);
    return 0;
}
