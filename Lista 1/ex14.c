#include<stdio.h>

void modify(int *pont){
    for(int i=0;i<5;i++){
        printf("\nDigite o novo valor que voce quer inserir no espaco %d: ",i);
        scanf("%d",(pont + i));
    }
}

int main(){
    int array[5];
        for(int i=0;i<5;i++){
            printf("Digite o valor %d = ",i+1);
            scanf("%d",&array[i]);
        }
        int *ptr = array;

    printf("Os valores inseridos primeiro: ");
        for(int i=0;i<5;i++){
            printf("\nPosicao %d: %d",i,array[i]);
        }
    modify(ptr);

         printf("Agora os novos valores: ");
    for(int i=0;i<5;i++){
        printf("\nPosicao %d: %d",i,array[i]);
    }
    return 0;
}
