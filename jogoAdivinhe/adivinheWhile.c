//primeiro diretivas: include <library>, define CONSTANTE VALOR (nunca muda)
#include <stdio.h>

int main (){

    // \n dá enter

    printf("**************************\n");
    printf("* Bem-vindo ao Adivinhe! *\n");
    printf("**************************\n");

    int numeroSecreto = 42;
    int chute;
    int tentativa = 1;

    while(1){ //1 é true
        // %d, variavel - substitui variavel de valor int
        //& armazena valor inteiro
        printf("Tentativa %d\n", tentativa);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d.\n", chute);

        if (chute < 0) {
            printf("Voce nao pode chutar numeros negativos.\n");
            //continue - vá para a próxima iteração
            continue;
        }
        
        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        //printf("Acertou! %d!\n", acertou); -  0 é false e 1 é true

        if (acertou) {
            printf("Parabens, voce acertou o numero secreto!\n");
            break;
        } else if (maior){
            printf("Seu chute foi maior que o numero secreto.\n");
        } else {
            printf("Seu chute foi menor que o numero secreto.\n");
            }
        
        tentativa++;

    }

    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas.", tentativa);
}

