#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 10;
    int *pont; //recebe endereco de memoria

    pont = &num;

    printf("valor num: %d\n", num);
    printf("valor *pont: %d\n", *pont);
    printf("endereco pont: %x\n", pont);
    //& pega o endereco de memoria
    printf("endereco &pont: %x\n\n", &pont);
    
    *pont = 11;

    printf("APOS DECLARACAO *pont=11\n\n");
    printf("valor num: %d\n", num);
    printf("valor *pont: %d\n", *pont);
    printf("endereco pont: %x\n", pont);
    printf("endereco &pont: %x\n", &pont);
    return 0;
}