#include <stdio.h>
#include <stdlib.h>

int main (int argc, char argv[]){
    float depositoInicial, primeiroMes, segundoMes, terceiroMes;
    depositoInicial = 500;
    primeiroMes = depositoInicial + 0.01*depositoInicial;
    segundoMes = primeiroMes + 0.01*primeiroMes;
    terceiroMes = segundoMes + 0.01*segundoMes;
    printf("Valor da conta: %.2f\n", terceiroMes);
    system("PAUSE");
    return 0;
}