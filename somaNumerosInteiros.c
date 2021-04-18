#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int numeroFinal;
    int i, soma;
    
    printf("Digite o valor do numero final: ");
    scanf("%d", &numeroFinal);

    soma = 0;
    i = 1;

    while (i <= numeroFinal){
        soma = soma + i;
        i++;
    }

    printf("Soma: %d\n", soma);
    system("PAUSE");
    return 0;
}