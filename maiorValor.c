#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int numeroInt;
    short int numeroShortInt;
    char variavelChar;
    unsigned char variavelUnsignedChar;

    numeroInt = pow(2,31)-1; //maior int possivel
    numeroShortInt = pow(2,15)-1; //maior short int possivel
    printf("Maior int representado = %d Maior short int representado  = %d\n", numeroInt, numeroShortInt);

    variavelChar = pow(2,7)-1;
    variavelUnsignedChar = pow(2,15)-1;
    printf("variavel char = %d variavel unsigned char  = %d\n", variavelChar, variavelUnsignedChar);

    variavelChar = variavelChar + 1;
    variavelUnsignedChar = variavelUnsignedChar + 1;
    printf("Maior char representado = %d Maior unsigned char representado  = %d\n", variavelChar, variavelUnsignedChar);
    system("PAUSE");
    return 0;

}