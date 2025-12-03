#include<stdio.h>
#define NUM_ARRAY 20

int par(int *pont){
    int par=0;
    for(int i=0;i<NUM_ARRAY;i++){
        if(*(pont+i) % 2 == 0){
            par++;
        }
    }
    return par;
}

int impar(int *pont){
    int impar=0;
    for(int i=0;i<NUM_ARRAY;i++){
        if(*(pont+i)  % 2 !=0){
            impar++;
        }
    }
    return impar;
}

int main(){
    int vetor[NUM_ARRAY],even,odd;
    for(int i=0;i<NUM_ARRAY;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    int *pont = vetor;
    even = par(pont) ;
    odd = impar(pont);
    printf("Numero de elementos pares = %d\nNumero de elementos impares = %d",even,odd);
    return 0;
}
