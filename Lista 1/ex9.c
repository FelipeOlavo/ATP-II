#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void linha(){

    printf(" |---------------| ");
}

void aleatorio(){
    int vetor[20];
    for(int i=0;i<20;i++){
        vetor[i]=(rand() %100) + 1;
    }
    printf("\n20 numeros aleatorios de 1 a 100: \n");
    for(int i=0;i<20;i++){
        printf("\n%d",vetor[i]);
    }
}

int main(){
   // usada para inicar o gerador de numeros aleatorios
    srand(time(NULL));
    linha();
    aleatorio();
    printf("\n\n");
    linha();
    return 0;
}
