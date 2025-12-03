#include<stdio.h>
#define NUM 10

int main()
{
    int vetor[NUM];

    // desse modo, caso pedir um numero > 100, n eh necessario digitar um por um !

    for(int i=0;i<NUM;i++)
        vetor[i] = i;

    printf("Valores inseridos: ");
    for(int i=0;i<10;i++){
        printf("\nVetor %d = %d",i,vetor[i]);
    }

    return 0;
}
