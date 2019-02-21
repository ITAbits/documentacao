#include <stdio.h>

/// A entrada vai ser um número inteiro positivo
/// Esse numero vai ser exibido no formato de leds
/// E deve-se imprimir quantos leds vao ser precisos pra imprimir o número

/// URI

/*
 _     _  _       _   _  _   _   _
| | |  _| _| |_| |_  |_   | |_| |_|
|_| | |_  _|   |  _| |_|  | |_|   |

*/

/// Deve-se usar o resto na divisao por 10 (% 10) para separar o numero na unidade e contabilizar a quantidade de leds
/// E em seguida dividir o numero por 10, assim sucessivamente enquanto o numero for maior que zero

int main(){
    int numero, leds = 0, unidade;
    scanf("%d", &numero);
    while (numero > 0){
        unidade = numero % 10;
        numero = numero / 10;
        /// numero /= 10
        switch(unidade){
            case 1:
                leds += 2;
                break;
            case 7:
                leds += 3;
                break;
            case 4:
                leds += 4;
                break;
            /// Quando mais de um caso levam pro mesmo código
            case 2:
            case 3:
            case 5:
            case 9:
                leds += 5;
                break;
            case 0:
            case 6:
                leds += 6;
                break;
            case 8:
                leds += 7;
                /// leds = leds + 7
        }
    }
    printf("%d leds\n", leds);
    return 0;
}
