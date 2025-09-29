#include<stdio.h>


typedef enum{
    DOMINGO=1,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
} Diasemana;


void imprimir(){

    printf("Domingo eh : %d\nSegunda eh: %d\nTerca eh: %d\nQuarta eh: %d\nQuinta eh: %d\nSexta eh: %d\nSabado eh : %d",DOMINGO,SEGUNDA,TERCA,QUARTA,QUINTA,SEXTA,SABADO);
}

int main(){

    imprimir();

    return 0;
}
