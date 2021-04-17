#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus: ");
    scanf("%f", &celsius);
    fahrenheit = (9 * celsius + 160)/5;
    printf("Esta temperatura corresponde a %.1f graus F\n", fahrenheit);
    system("PAUSE");
    return 0;
}