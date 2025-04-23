#include <stdio.h>
#include <stdlib.h>

int main(){
    int primeiro_numero, segundo_numero;

    
    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro_numero);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &segundo_numero);

    int soma = primeiro_numero + segundo_numero;
    
    printf("\nO valor da sua soma e %d\n\n", soma);

    system("PAUSE");
    return 0;
}