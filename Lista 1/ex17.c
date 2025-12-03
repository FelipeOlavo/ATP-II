#include<stdio.h>
#define NUM_ARRAY 5

void soma(int *ptr)
{
    for(int i=0;i<NUM_ARRAY;i++)
    {
        *(ptr+i) = *(ptr+i) + 10;
    }
}

int main(){
    int vetor[NUM_ARRAY];
        for(int i=0;i<NUM_ARRAY;i++){
            printf("Digite o %d numero : ",i+1);
            scanf("%d",&vetor[i]);
        }
    int *ptr = vetor;

        printf("\nOs valores armazenados primeiros: ");

        for(int i=0;i<NUM_ARRAY;i++)
        {
            printf("\nvalor %d = %d",i+1,vetor[i]);
        }
        soma(ptr);
        printf("\nAgora os valores somados +10: ");

            for(int i=0;i<NUM_ARRAY;i++)
            {
                printf("\nvalor %d = %d",i+1,vetor[i]);
            }

    return 0;
}
