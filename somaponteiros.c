#include <stdio.h>
#include <stdlib.h>

void soma (int *primeiro_numero, int *segundo_numero){ //* - vai usar o endereco de memoria

    int resultado = *primeiro_numero + *segundo_numero;
    printf("Valor do primeiro e segundo numero dentro da funcao soma: %d e %d\n", *primeiro_numero, *segundo_numero);
    printf("Endereco de memoria do primeiro e segundo numero dentro da funcao soma: %x e %x\n", primeiro_numero, segundo_numero);
    printf("Soma: %d + %d = %d\n", *primeiro_numero, *segundo_numero, resultado);
    printf("Endereco de memoria da soma: %x\n", &resultado);
}

int main(){
    int primeiro_numero, segundo_numero;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro_numero);
    printf("Endereco de memoria do primeiro numero em main: %x\n", &primeiro_numero);//%x e &variavel para obter o endereco de memoria
    printf("Digite o segundo numero: ");
    scanf("%d", &segundo_numero);
    printf("Endereco de memoria do segundo numero em main: %x\n", &segundo_numero);

    soma(&primeiro_numero, &segundo_numero);

    system("PAUSE");
    return 0;
}