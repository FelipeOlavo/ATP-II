#include<stdio.h>
#define NUM_ARRAY 5

int media(int vetor[])
{
    int soma=0,media=0;
        for(int i=0;i<NUM_ARRAY;i++)
        {
            soma = soma + vetor[i];
        }
        media = soma/NUM_ARRAY;
    return media;
}

int main(){
    int vetor[NUM_ARRAY];
        for(int i=0;i<NUM_ARRAY;i++)
        {
            printf("Digite o %d  elemento: ",i+1);
            scanf("%d",&vetor[i]);
        }
    printf("A media dos elementos dentro do array e : %d",media(vetor));

    return 0;
}
