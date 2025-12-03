#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media(){
    int vetor[10];
    float soma,media;
    for(int i=0;i<10;i++){
        vetor[i] =(rand() %101) + 50;
    }
    for(int i=0;i<10;i++){
        printf("\n%d",vetor[i]);
        soma = soma +vetor[i];
    }
    media = soma/10;
    return media;
}

int main(){
    float average;
    srand(time(NULL));
    average = media();
    printf("\nMedia = %f",average);

    return 0;
}
