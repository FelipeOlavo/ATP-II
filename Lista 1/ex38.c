#include<stdio.h>
#define NUM_ARRAY 10

int maior(int vetor[])
{
    int bigger = vetor[0];
        for(int i=1;i<NUM_ARRAY;i++){
            if(vetor[i]>bigger){
                bigger=vetor[i];
            }
        }
        return bigger;
}

int main()
{
    int vetor[NUM_ARRAY];
        for(int i=0;i<NUM_ARRAY;i++)
        {
            printf("Digite o %d elemento: ",i+1);
            scanf("%d",&vetor[i]);
        }

        printf("O maior numero encontrado nessa array foi o : %d",maior(vetor));

    return 0;
}
