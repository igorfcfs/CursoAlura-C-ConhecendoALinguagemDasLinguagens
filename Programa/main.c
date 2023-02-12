#include <stdio.h>
#include <stdlib.h>

#define NUMERO_DE_TENTATIVAS 5

int main()
{
    //imprime cabecalho do nosso jogo
    printf("*****************************************\n");
    printf("*Bem vindo ao jogo de adivinhacao*\n");
    printf("*****************************************\n");

    int numeroSecreto = 42;
    //printf("O numero %d eh o secreto. Nao conta pra ninguem!\n", numeroSecreto);

    int chute;
    //int ganhou = 0;
    int tentativas = 0;
    //int numeroDeTentativas = 3;

    //for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
    while(/*ganhou == 0*/1){
        //printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Tentativa %d\n", tentativas+1);
        printf("Qual eh o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        //printf("%d %d", numeroSecreto, chute);

        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            //i--;
            continue;
        }

        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        //int menor = chute < numeroSecreto;
        //printf("Acertou: %d\n", acertou);

        if(acertou){
            printf("Parabens voce acertou!\n");
            printf("Jogue de novo, voce eh um bom jogador!\n");

            break;
            //ganhou = 1;
        } /*else {
            printf("Que pena, voce errou!\n");
            int maior = chute > numeroSecreto;
            if(maior){
                printf("Seu chute foi maior que o numero secreto!\n");
            } else {
                printf("Seu chute foi menor que o numero secreto!\n");
            }*/

        else if(maior){
            printf("Seu chute foi maior que o numero secreto!\n");
        }

        else {
            printf("Seu chute foi menor que o numero secreto!\n");
        }
        tentativas++;
    }
    printf("Fim de jogo\n");
    printf("Voce acertou em %d tentativas!", tentativas);
    return 0;
}
