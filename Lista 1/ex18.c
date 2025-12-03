#include<stdio.h>
#define NUM_ARRAY 10

int soma(int *ptr)
{
    int soma=0;
    for(int i=0;i<NUM_ARRAY;i++)
    {
        soma = soma + *(ptr+i);
    }
    return soma;
}

int main()
{
    int array[NUM_ARRAY];
        for(int i=0;i<NUM_ARRAY;i++)
        {
            printf("Digite o %d elemento: ",i+1);
            scanf("%d",&array[i]);
        }
    int *ptr = array;

        printf("A soma de todos os elementos do array : %d",soma(ptr));

    return 0;
}
