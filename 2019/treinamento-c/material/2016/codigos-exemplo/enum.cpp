#include <stdio.h>

enum diaSemana {dom, seg, ter, qua, qui, sex, sab};
typedef enum diaSemana diaSemana;
///              0    1    2    3   4    5    6
///enum diaSemana hoje, amanha = ter;
diaSemana hoje, amanha = ter;

int main(){
    printf("%d\n", amanha);
    amanha++;
    return 0;
}
