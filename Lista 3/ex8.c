#include<stdio.h>
#include<string.h>
#define NUM 3

typedef struct{

    char nome[20];
    int codigo;
    float preco;

} produto;

void leitura(produto informacao[]){

    for(int i=0;i<NUM;i++){
        printf("Digite o nome do %d produto: ",i+1);
        fgets(informacao[i].nome,20,stdin);
        printf("Digite o codigo do %d produto: ",i+1);
        scanf("%d",&informacao[i].codigo);
        printf("Digite o preco do %d produto: ",i+1);
        scanf("%f",&informacao[i].preco);
        getchar();
    }

}

void imprimir(produto informacao[]){

    for(int i=0;i<NUM;i++){
        printf("O produto %d tem o nome : %s\nO codigo eh :%d\nO preco eh : %f\n",i+1,informacao[i].nome,informacao[i].codigo,informacao[i].preco);
    }

}

int main(){

    produto informacao[NUM];

    leitura(informacao);

    imprimir(informacao);

    return 0;
}
