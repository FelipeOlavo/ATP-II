#include<stdio.h>
#define NUM_ARRAY 8

void swap(int vetor[])
{
    int aux[NUM_ARRAY];
        int j=0;
        for(int i=NUM_ARRAY-1;i>=0;i--){
            aux[j]=vetor[i];
            j++;
        }
        j=0;
        for(int i=0;i<NUM_ARRAY;i++){
            vetor[i]=aux[j];
            j++;
        }
}

int main(){
    int vetor[NUM_ARRAY];
        for(int i=0;i<NUM_ARRAY;i++){
            printf("Digite o numero %d: ",i+1);
            scanf("%d",&vetor[i]);
        }
        printf("\nOs valores na ordem normal: ");

    for(int i=0;i<NUM_ARRAY;i++){
        printf("\nvalor %d: %d",i+1,vetor[i]);
    }
       printf("\nOs valores na ordem inversa: ");
       swap(vetor);
        for(int i=0;i<NUM_ARRAY;i++){
            printf("\nvalor %d: %d",i+1,vetor[i]);
        }

    return 0;
}
