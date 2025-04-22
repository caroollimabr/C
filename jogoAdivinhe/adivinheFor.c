//primeiro diretivas: include <library>, define CONSTANTE VALOR (nunca muda)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS_FACIL 20
#define NUMERO_DE_TENTATIVAS_INTERMEDIARIO 10
#define NUMERO_DE_TENTATIVAS_DIFICIL 5

int main (){

    // \n dá enter

    printf("**************************\n");
    printf("* Bem-vindo ao Adivinhe! *\n");
    printf("**************************\n");

    //para que números randômicos sejam de fato gerados
    int segundos = time(0);
    srand(segundos); //seed para o randômico será os segundos, que estão mudando o tempo todo

    int numeroGrande = rand(); // função gera número randômico que pode ter 9 casas, mas o mesmo número é gerado por já haver a mesma semente
    int numeroSecreto = numeroGrande % 100; // limita número randômico de 0 a 99, o resto da divisão
    int chute; // cuidado, só use uma variável quando ela estiver inicializada
    int tentativa = 1;
    
    double pontos = 1000;
    int acertou = 0;

    int nivel;
    printf("Em qual nivel de dificuldade deseja jogar? (1) Facil (2) Intermediario (3) Dificil\n");
    printf("Escolha o nivel de dificuldade: ");
    scanf("%d", &nivel);

    int numeroTentativas;

    switch (nivel) {
        case 1:
            numeroTentativas = NUMERO_DE_TENTATIVAS_FACIL;
            break;
        case 2:
            numeroTentativas = NUMERO_DE_TENTATIVAS_INTERMEDIARIO;
            break;
        default:
            numeroTentativas = NUMERO_DE_TENTATIVAS_DIFICIL;
            break;
    }

    for(int i = 1; i <= numeroTentativas; i++){
        // %d, variavel - substitui variavel de valor int
        //& armazena valor inteiro
        printf("Tentativa %d de %d\n", i, numeroTentativas);
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
        
        acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        //printf("Acertou! %d!\n", acertou); -  0 é false e 1 é true

        if (acertou) {
            break;
        } 
        else if (maior){
            printf("Seu chute foi maior que o numero secreto.\n");
        } 
        else {
            printf("Seu chute foi menor que o numero secreto.\n");
        }

        tentativa++;

        //abs() tira o negativo, ou seja, transforma em número absoluto
        double pontosPerdidos = abs(chute - numeroSecreto) / (double) 2; //precisa ser 2.0 para ter resposta decimal

        pontos = pontos - pontosPerdidos;

    }

    printf("Fim de jogo!\n");

    if(acertou) {
        printf("Parabens, voce acertou o numero secreto!\n");
        printf("Voce acertou em %d tentativas.", tentativa);
    //%f é para decimal, %.1f vai mostrar 1 casa decimal
        printf("Total de pontos: %.1f\n", pontos);
    }
    else {
        printf("Voce perdeu! Tente de novo!");
    }

    
}

