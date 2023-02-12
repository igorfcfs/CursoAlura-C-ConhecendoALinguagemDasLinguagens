#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main1(){
    /*int x;
    int y;
    printf("Escreva dois valores: ");
    scanf("%d %d", &x, &y);
    int multiplicacao = x*y;
    printf("%d", multiplicacao);
    return 0;*/

    /*int a = 0;
    int b = 0;
    double pontos = (double)a / (double)b;
    printf("%f\n", pontos);

    double pi = 3.1415;
    return 0;*/

    /*int a = abs(3);
    int b = abs(-3);

    int c = abs(a*b);
    printf("%d\n", c);*/

    int segundos = time(0);
    srand(segundos);

    int n1 = rand();
    int n2 = rand();
    printf("%d %d\n", n1, n2);

}
