#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, par;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    par  = numero % 2 == 0;
    
    if (par){
        printf("O numero e par\n");
    }
    else {
        printf("O numero e impar\n");
    }
    
    system("PAUSE");
    return 0;
}