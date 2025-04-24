#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    
    printf("Digite o seu numero: ");
    scanf("%d", &numero);

    int triplo_numero = numero * 3;

    //& pega o endereco de memoria
    printf("O endereco de memoria do seu numero e %x\n", &numero);
    printf("O triplo do seu numero e %d\n", triplo_numero);
    printf("O endereco de memoria do triplo do seu numero e %x\n", &triplo_numero);

    system("PAUSE");
    return 0;
}