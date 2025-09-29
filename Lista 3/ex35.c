#include<stdio.h>
#include<stdlib.h>
#include<time.h>


typedef enum{

    Primavera=1,
    Verao,
    Outono,
    Inverno

}Estacao;

void imprimir(){

    printf("\nValores da estacao do ano\n");
    printf("Primavera: %d\nVerao: %d\nOutono: %d\nInverno: %d\n",Primavera,Verao,Outono,Inverno);

}

int main()
{
    imprimir();

    return 0;
}
