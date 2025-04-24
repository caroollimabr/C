#include <stdio.h>
#include <stdlib.h>

void calcula (int *c){ //* - vai usar o endereco de memoria
    printf("valor de c em funcao calcula: %d\n", *c);
    printf("endereco de memoria de c em funcao calcula: %x\n", c);
    (*c)++; //entre no valor que existe dentro do endereco de memoria
    printf("valor de c em funcao calcula apos c++: %d\n", *c);
    printf("endereco de memoria de c em funcao calcula apos c++: %x\n", c);
}

int main(){
    int c = 10;

    printf("valor inicial de c em main: %d\n", c);
    printf("endereco de memoria de c em main: %x\n", &c);//%x e &variavel para obter o endereco de memoria

    calcula(&c);

    printf("valor final de c em main apos funcao calcula: %d\n", c);
    printf("endereco de memoria de c em main apos funcao calcula: %x\n", &c);

    system("PAUSE");
    return 0;
}