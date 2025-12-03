#include<stdio.h>
#include<math.h>
#define NUM 7


int main(){

    //inicializar um vetor de tam = 7 , com apenas numeros primos
    int vetor[NUM]={2,3,5,7,11,13,17};

    for(int i=0;i<NUM;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}
