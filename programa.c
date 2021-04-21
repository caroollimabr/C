#include <stdio.h>

typedef float num_real; //typedef: define um novo nome para um determinado tipo
typedef int medida;
typedef medida altura;
altura alt=20;
int x=4, i;
int main (void){
	i = alt / x;
	return(0);
}

typedef struct moldura{     //struct: ao armazenar os dados de uma mesma entidade, isso possa ser feito c uma unica variavel
    int bv;
    char contentRAM;
} frame;
typedef struct pagina{ 
    int bv;
    char contentDISCO;
    frame *pv;
}page; 
   
    frame RAM[2]; 
    page DISCO[20];

