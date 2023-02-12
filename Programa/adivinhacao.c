#include <stdio.h>
#include <stdlib.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{
    printf("*****************************************\n");
    printf("*Bem vindo ao jogo de adivinhacao*\n");
    printf("*****************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;
    int chute;
    //printf("chute %d\n", chute);
    int tentativas = 0;
    double pontos = 1000;

    while(1){
        printf("Tentativa %d\n", tentativas+1);
        printf("Qual eh o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;

        if(acertou){
            printf("Parabens voce acertou!\n");
            printf("Jogue de novo, voce eh um bom jogador!\n");
            break;
        } else if(maior){
            printf("Seu chute foi maior que o numero secreto!\n");
        } else {
            printf("Seu chute foi menor que o numero secreto!\n");
        }
        tentativas++;
        double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
        pontos -= pontosPerdidos;
    }
    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas!\n", tentativas+1);
    printf("Total de pontos: %.1f\n", pontos);
    return 0;
}
