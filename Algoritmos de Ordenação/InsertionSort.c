#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 10


void insertion_sort(int vetor[])
{
    int j,aux;

    for(int i=0;i<NUM-1;i++){
        if(vetor[i]>vetor[i+1]){
            aux = vetor[i+1];
            vetor[i+1] = vetor[i];
            vetor[i] = aux;
            j = i-1;
            while(j>=0){
                if(aux<vetor[j]){
                    vetor[j+1] = vetor[j];
                    vetor[j] = aux;
                }else{
                    break;
                }
                j = j-1;
            }
        }
    }
}


void imprimir(int vetor[])
{
    for(int i=0;i<NUM;i++)
    {
        printf("\n%d",vetor[i]);
    }
}

int main(){
    srand(time(NULL));
    int vetor[NUM];

    for(int i=0;i<NUM;i++)
    {
        vetor[i] = (rand()% 100 ) + 1;
    }

    printf("\nAntes da ordenacao\n");

    imprimir(vetor);

    insertion_sort(vetor);

    printf("\nDepois da ordenacao por insercao\n");

    imprimir(vetor);

    return 0;
}
