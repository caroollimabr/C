#include <stdio.h>
#include <stdlib.h>

void potencia(int* resultado, int a, int b) {
    *resultado = 1;
    for(int i = 0; i < b; i++) {
        *resultado = *resultado * a;
    }

    printf("O resultado e %d\n", *resultado);
}

int main(){
    int resultado = 1;
    potencia(&resultado, 3, 2);
    
    system("PAUSE");
    return 0;
}

