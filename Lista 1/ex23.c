#include<stdio.h>
#include<stdlib.h>
#define NUM 10


int palindromo(int *vet);
void imprimir(int *vet);


int main(){

    int *vet;

    vet = malloc(NUM*sizeof(int));

    printf("Digite os numeros para dps verificar se eh palindromo\n");

    for(int i=0;i<NUM;i++){
        printf("Digite o %d elemento: ",i+1);
        scanf("%d",&vet[i]);
    }

    int pali = palindromo(vet);

    printf("\nO vetor\n");

    imprimir(vet);


    if(pali){
        printf("Esse vetor eh palindromo!");
    }else{
        printf("Nao eh palindromo!");
    }

    return 0;

}

void imprimir(int *vet){

    for(int i=0;i<NUM;i++){
        printf("Elemento [%d] = %d\n",i+1,vet[i]);
    }

}

int palindromo(int *vet){

    int pali=1;

    for(int i=0;i<NUM;i++){
        if(vet[i] != vet[NUM-i-1]){
            pali = 0;
        }

    }

    return pali;
}
