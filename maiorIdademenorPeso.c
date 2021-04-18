#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int idade1, idade2, maior_idade;
    float peso1, peso2, menor_peso;
    int mais_leve, mais_velho;
    printf("Digite a idade (em anos) e o peso (em kg) da primeira pessoa: ");
    scanf("%d %f", &idade1, &peso1);
    printf("Digite a idade (em anos) e o peso (em kg) da segunda pessoa: ");
    scanf("%d %f", &idade2, &peso2);
    
    if (idade1 > idade2){
        maior_idade = idade1;
        mais_velho = 1;
    } else {
        maior_idade = idade2;
        mais_velho = 2;
    }
    
    if (peso1 < peso2){
        menor_peso = peso1;
        mais_leve = 1;
    } else {
        menor_peso = peso2;
        mais_leve = 2;
    }

    printf("A pessoa mais velha é a %d. Ela tem %d anos. ", mais_velho, maior_idade);
    printf("A pessoa que tem peso menor é a %d. Ela pesa %d kg.", mais_leve, menor_peso);
    system("PAUSE");
    return 0;
}