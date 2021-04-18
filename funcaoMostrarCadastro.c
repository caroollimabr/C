#include <stdio.h>

typedef struct {int Dia,Mes,Ano;} DATA;
typedef struct pessoa {
    char Nome[100];
    int Idade;
    float Salario;
    DATA Nasc;
} PESSOA;

void MostrarCadastro(struct pessoa pessoa1) {
    printf ("Nome: %s\n", pessoa1.Nome);
    printf ("Idade: %d\n", pessoa1.Idade);
    printf ("Salário: %.2f\n", pessoa1.Salario);
    printf ("Data de nascimento: %d/%d/%d\n", pessoa1.Nasc.Dia, pessoa1.Nasc.Mes, pessoa1.Nasc.Ano);
}

main(){
    struct pessoa pessoa1 = {"Fulano", 30, 7000.87, {25, 5, 1990}};
    MostrarCadastro(pessoa1);
    
} 