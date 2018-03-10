///Nos ja vimos vetores de numeros inteiros, matrizes de floats, por que nao pensar em vetores/matrizes de char?! E, indo alem, com-
///tacionalmente falando, qual a diferenca entre um vetor de char e uma palavra? Hoje adentramos nesse estudo:STRINGS !!!

#include <stdio.h>
///Segue abaixo a biblioteca padrao de string de C:
#include <string.h>

int main()
{
    int x;

    ///1 - Como declarar e preencher? Alem das maneiras normais de vetor, ha mais algumas bizus:
    char nome1[7] = {'F','u','l','a','n','o','\0'}; ///padrao + '\0' -> caractere que marca o fim da string
    char nome2[] = {'F','u','l','a','n','o','\0'}; ///Dimensao automaticamente colocada (7 no caso)
    char nome3[] = "Fulano"; ///Bem bizu, tambem automaticamente colocada
    char nome4[7] = "Fulano";
    char nome5[10];

    ///OBS.: assim como vetor, nao eh possivel preencher inumeras posicoes simultaneamente fora da declaracao, ou seja:
    ///nome = {'x','y'}; /// -> nao funciona -> erro de compilacao (descomente e teste)

    ///2 - Como acessar? Exatamente igual a vetor
    nome1[0] = 'x';

    ///3 - Leitura de string:
    printf("Digite uma palavra: ");
    scanf("%s", &nome1); ///%s -> ponham s agora e essa leitura sera de toda a palavra (ate um espaco ou um '\n')
    scanf("%s", nome1); ///Tambem funciona, motivo: cenas dos proximos capitulos (procurar por ponteiros)
    ///Bizuleu do scanf - so le ate o proximo espaco, nao ate o proximo '\n'

    ///4 - Como ler ate o fim da linha? gets
    gets(nome1);

    ///5 - '\0' - Detalhamento '\0': marca o fim da string, sempre que for imprimi-la o computador so imprime ate o '\0', quando
    ///recebe-a, por exemplo: "Fulano", armazena assim: 'F','u','l','a','n','o','\0'. Sempre lembra dele!

    ///6 - strcpy -> Copia uma string pra outra: sintaxe: strcpy(nome1,nome2) copia de 2 pra 1, onde nome1 tem que ser variavel e
    ///nome2 pode ser constante ou variavel. Cuidado com o tamanho, nao da pra copiar uma palavra de 20 caracteres onde so tem
    ///espaco alocado pra 10.
    strcpy(nome1, nome2);

    ///7 - Strcat -> concatena strings, sintaxe: strcat(nome1, nome2), por exemplo, se nome1 = "Fulano\0" e nome2 = " eh doido\0",
    ///teremos: nome1 = "Fulano eh doido\0", cuidado para nao concatenar onde nao cabe, no caso anterior, a operacao poderia nao
    ///ocorrer se o tamanho armazenado para nome1 fosse 10.
    strcat(nome3, nome4);

    ///8 - Strlen -> da o tamanho da string que esta ocupado, ou seja, o numero de caracteres antes do '\0'. Sintaxa: strlen(nom)
    x = strlen(nome5);

    ///9 - Strcmp -> Compara lexicograficamente duas strings
    ///Valores de retorno - 0: strings iguais; < 0: primeira é menor; > 0: primeira é maior. (OBS.: diferencia minusculas e maius
    ///culas). Compara nao a soma equivalente a palavra inteira, mas apenas ate uma letra ser maior que a outra. Sintaxe:
    ///strcmp(nome1, nome2). Lembrar de armazenar numa variavel inteira (a funcao tem retorno)
    x = strcmp(nome1, nome2);

    ///10 - Strcmpi - bizu, mesma coisa de cima, mas sem diferenciar minusculas e maiusculas
    x = strcmpi(nome1, nome2);

    return 0;
}
