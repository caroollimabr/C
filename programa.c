#include <stdio.h>

typedef float num_real;
typedef int medida;
typedef medida altura;
altura alt=20;
int x=4, i;
int main (void){
	i = alt / x;
	return(0);
}

typedef struct moldura{    
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

