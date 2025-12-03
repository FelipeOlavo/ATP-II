#include<stdio.h>

int main(){
    float valores[6];
    float soma=0,media=0;
        for(int i=0;i<6;i++){
            printf("Digite o numero %d = ",i+1);
            scanf("%f",&valores[i]);
            soma = soma + valores[i];
        }
    media = soma/6;
    printf("A media dos 6 valores inseridos = %.2f",media);

 return 0;
}
