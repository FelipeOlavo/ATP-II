#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 10

void bubblesort(int vetor[])
{

    int temp;

    for(int i=0;i<NUM-1;i++){
        for(int j=0;j<NUM-i-1;j++){
            if(vetor[j]>vetor[j+1]){

                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

}

void imprimir(int vetor[]){


    for(int i=0;i<NUM;i++){

        printf("Elemento [%d] = %d",i+1,vetor[i]);
        printf("\n");

    }

}


int main(){

    int vetor[NUM];

    for(int i=0;i<NUM;i++)
        vetor[i] = (rand() % 11);

    printf("\nAntes\n");
    imprimir(vetor);

    printf("\nDepois\n");
    bubblesort(vetor);
    imprimir(vetor);

    return 0;
}
