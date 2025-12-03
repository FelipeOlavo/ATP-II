#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void negativo(){
    int vetor[12];
    int neg;

    for(int i=0;i<12;i++){
        vetor[i] = (rand() % 41) -20;
    }

    for(int i=0;i<12;i++){
        if(vetor[i]<0){
            neg++;
            printf("\n%d",vetor[i]);
        }
    }
    printf("\nA quantidade de numeros negativos e = %d ",neg);
}

int main(){
    srand(time(NULL));
    negativo();

    return 0;
}
