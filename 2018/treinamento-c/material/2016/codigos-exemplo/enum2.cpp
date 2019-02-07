#include <stdio.h>

enum diaSemana {dom, seg, ter = 4, qua, qui, sex = 9, sab};
typedef enum diaSemana diaSemana;
///enum diaSemana hoje, amanha = ter;
diaSemana hoje, amanha = ter;

int main(){
    printf("%d\n", amanha);
    return 0;
}
