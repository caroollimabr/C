#include <stdio.h>

int soma(int* nums, int tamanho){
    int somaTotal = 0;
    for (int i = 0; i < tamanho; i++){
        somaTotal += nums[i];
    }
    return somaTotal;
}

int main(){
    int nums[3] = {10, 20, 30};

    int total = soma(nums, 3);

    printf("O total da soma e %d\n", total);

    return 0;
}