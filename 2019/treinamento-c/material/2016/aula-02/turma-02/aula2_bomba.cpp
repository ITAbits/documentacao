#include <stdio.h>

int main(){
    int x = 10;
    while(x > 0){
        printf("%d\n", x);
        x--;
    }
    printf("BOOM!\n\a");
    return 0;
}
