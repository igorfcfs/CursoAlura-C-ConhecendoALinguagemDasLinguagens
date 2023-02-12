#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 0;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numeroDeTentativas;
    /*if(nivel = 1){
        numeroDeTentativas = 20;
    } else if(nivel = 2){
        numeroDeTentativas = 15;
    } else {
        numeroDeTentativas = 6;
    }*/
    switch(nivel){
    case 1:
        numeroDeTentativas = 20;
        break;
    case 2:
        numeroDeTentativas = 15;
        break;
    default:
        numeroDeTentativas = 6;
        break;
    }

    for(int i = 1; i <= numeroDeTentativas; i++){
        printf("Tentativa %d\n", tentativas+1);
        printf("Qual eh o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;

        if(acertou){
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
    if(acertou){
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabens! Voce acertou!\n");
        printf("Voce fez %.2f pontos. Ate a proxima!\n\n", pontos);
    } else {
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
        printf("\nVoce perdeu! Tente novamente!\n\n");
    }
    return 0;
}
