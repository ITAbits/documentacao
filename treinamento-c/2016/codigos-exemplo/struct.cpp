#include <stdio.h>
#include <math.h>

typedef struct Ponto Ponto;
struct Ponto{
    float x, y, z;
    float modulo;
};

float distancia(Ponto c, Ponto d){
    float dist2 = (c.x - d.x)*(c.x - d.x) + (c.y - d.y)*(c.y - d.y) + (c.z - d.z)*(c.z - d.z);
    return sqrt(dist2);
}

int main(){
    Ponto a, b = {2.5, 9.6, 7.6}, origem = {0,0,0,0};
    scanf("%f %f %f", &a.x, &a.y, &a.z);
    a.modulo = distancia(a, origem);
    printf("a = (%f, %f, %f)\n", a.x, a.y, a.z);
    printf("|a| = %f\n", a.modulo);
    printf("|a - b| = %f\n", distancia(a, b));
    return 0;
}
