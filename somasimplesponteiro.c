#include <stdio.h>
#include <stdlib.h>

void soma(int* num, int a, int b) {
    *num = a + b;
    printf("A soma e %d\n", *num);
}

int main(){
    int num;
    soma(&num, 22, 23);

    system("PAUSE");
    return 0;
}

