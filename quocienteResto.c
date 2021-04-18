#include <stdio.h>
#include <stdlib.h>

int main (int args, char * arg[]){
    int numero1, numero2;
    int quociente, resto;

    printf("Digite dois valores: ");
    scanf("%d %d", &numero1, &numero2);
    quociente = 0;

    while (numero2 <= numero1){
        quociente++;
        numero1 = numero1 - numero2;
    }

    resto = numero1;
    printf("Quociente: %d // Resto: %d\n", quociente, resto);
    system("PAUSE");
    return 0;    
}