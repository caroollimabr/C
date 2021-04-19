#include <stdio.h>

int sum (int x, int y);

int main(){
    printf("%d\n", sum(3, 7));
    return 0;
}

int sum(int x, int y){
    int r;
    
    __asm__ __volatile__ (
        "lea (%1, %2), %[saida]"
        : [saida] "=r" (r) //"=" escreve conteudo na variavel "+" adiciona, "=r" coloca em um registrador, "=m" memoria, "=g" compilador decide
        : "r" (x), "r" (y) //guardando as variaveis no registrador
    );

    return r;
}
