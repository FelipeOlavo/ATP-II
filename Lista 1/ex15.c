#include<stdio.h>

#define NUM_ARRAY 7

int soma(int *pont){
    int soma=0;
    for(int i=0;i<NUM_ARRAY;i++){
        soma = soma + *(pont + i);
    }
    return soma;
}

int main(){
    int array[7];
    int sum;
    for(int i=0;i<NUM_ARRAY;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&array[i]);
    }
    int *ptr = array;
    sum = soma(ptr);
    printf("\nA soma dos valores : ");
        for(int i=0;i<NUM_ARRAY;i++){
            printf("\nvalor %d = %d",i+1,array[i]);
        }
    printf("\nsoma igual = %d",sum);
    return 0;
}

