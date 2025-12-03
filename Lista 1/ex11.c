#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior(){
    int vetor[15];
    int maior=0;
    for(int i=0;i<15;i++){
        vetor[i] = rand() % 51;
    }
    printf("Aqui estao os numeros armazenados: ");

        for(int i=0;i<15;i++){
            printf("\n%d",vetor[i]);
        }

    printf("\nEntre esses numeros o maior e : ");

    for(int i=0;i<15;i++){

        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }

    return maior;
}

int main(){
    srand(time(NULL));
    int bigger;
    bigger= maior();
    printf("%d",bigger);

    return 0;
}
