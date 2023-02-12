#include <stdio.h>
#include <stdlib.h>

int main()
{
    //imprime cabecalho do nosso jogo
    printf("*****************************************\n");
    printf("*Bem vindo ao jogo de adivinhacao*\n");
    printf("*****************************************\n");

    int numeroSecreto = 42;
    //printf("O numero %d eh o secreto. Nao conta pra ninguem!\n", numeroSecreto);

    int chute;
    printf("Qual eh o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
    //printf("%d %d", numeroSecreto, chute);
    return 0;
}
