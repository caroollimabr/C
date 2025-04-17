//primeiro diretivas: include <library>, define CONSTANTE VALOR (nunca muda)
#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 3

int main (){

    // \n dá enter

    printf("**************************\n");
    printf("* Bem-vindo ao Adivinhe! *\n");
    printf("**************************\n");

    int numeroSecreto = 42;
    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
        // %d, variavel - substitui variavel de valor int
        //& armazena valor inteiro
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d.\n", chute);

        if (chute < 0) {
            printf("Voce nao pode chutar numeros negativos.\n");
            //mantém na mesma tentativa:
            i--;
            //continue - vá para a próxima iteração
            continue;
        }
        
        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;

        //printf("Acertou! %d!\n", acertou); -  0 é false e 1 é true

        if (acertou) {
            printf("Parabens, voce acertou o numero secreto!\n");
            break;
        } else if (maior){
            printf("Seu chute foi maior que o numero secreto.\n");
        } else if (menor){
            printf("Seu chute foi menor que o numero secreto.\n");
            }

    }

    printf("Fim de jogo!\n");
}

