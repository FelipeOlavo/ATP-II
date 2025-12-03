#include<stdio.h>
#define NUM_ARRAY 8

float media(float *ptr)
{
    float soma=0,media=0;
        for(int i=0;i<NUM_ARRAY;i++)
        {
            soma = soma + *(ptr+i);
        }
        media = soma/NUM_ARRAY;

    return media;
}

int main()
{
    float vetor[NUM_ARRAY];
        for(int i=0;i<NUM_ARRAY;i++){
            printf("Digite o %d do array: ",i+1);
            scanf("%f",&vetor[i]);
        }
        float *ptr = vetor;

    printf("A media de todos os elementos do array : %.2f",media(ptr));

    return 0;
}
