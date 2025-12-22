#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 10


void ordenation(int vetor[]){

    //selection ordenation O(n²),pois temos dois for, o qual cada um percorre n vezes

    int menor,aux;

    for(int i=0;i<NUM-1;i++){
        menor = i;
        for(int j=i+1;j<NUM;j++){
            if(vetor[j]<vetor[menor]){
                menor = j;
            }
        }
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
    }

}


int main(){
    srand(time(NULL));
    int vetor[NUM];

    for(int i=0;i<NUM;i++){
        vetor[i] = (rand() % 150 ) + 1 ;
    }

    printf("\nAntes\n");

    for(int i=0;i<NUM;i++){
        printf("\n%d",vetor[i]);
    }

    ordenation(vetor);

    printf("\nDepois\n");

    for(int i=0;i<NUM;i++){
        printf("\n%d",vetor[i]);
    }

    return 0;
}
