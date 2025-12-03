#include<stdio.h>
// professor n sei se era para usar ponteiro, porém queria treinar mais o ponteiro, ai acabei utilizando dele
#define NUM_ARRAY 10
int maior(int *pont){
    int bigger=*pont;
    for(int i=0;i<NUM_ARRAY;i++){
        if(*(pont+i)>bigger){
            bigger = *(pont+i);
        }
    }
    return bigger;
}
int menor(int *pont){
    int smaller = *pont;
    for(int i=0;i<NUM_ARRAY;i++){
        if(*(pont+i)<smaller){
            smaller = *(pont+i);
        }
    }
    return smaller;
}

int main(){
    int vetor[NUM_ARRAY];
    for(int i=0;i<NUM_ARRAY;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    int *pont = vetor;
    int bigger,smaller;
    bigger = maior(pont);
    smaller = menor(pont);
        printf("Maior %d\nMenor: %d",bigger,smaller);

    return 0;
}
