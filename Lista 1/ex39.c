    #include<stdio.h>
#define NUM_ARRAY 6

int posi(int vetor[])
{
    int positivo=0;
        for(int i=0;i<NUM_ARRAY;i++){
            if(vetor[i]>0){
                positivo++;
            }
        }
    return positivo;
}

int main()
{
    int vetor[NUM_ARRAY];
        for(int i=0;i<NUM_ARRAY;i++)
        {
            printf("Digite o %d elemento: ",i+1);
            scanf("%d",&vetor[i]);
        }
    printf("O numero de elementos positivos desse array: %d",posi(vetor));

    return 0;
}
