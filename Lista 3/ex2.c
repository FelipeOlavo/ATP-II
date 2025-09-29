#include<stdio.h>

typedef struct{

    char marca[20];
    char modelo[20];
    int ano;
} informacao;

void imprimir(informacao carro){

    printf("Marca: %s\n",carro.marca);
    printf("Modelo: %s\n",carro.modelo);
    printf("Ano : %d",carro.ano);

}


int main(){
    informacao carro;

    printf("Digite o marca do carro: ");
    gets(carro.marca);
    printf("Digite o modelo do carro: ");
    gets(carro.modelo);
    printf("Digite o ano de fabricacao: ");
    scanf("%d",&carro.ano);

    imprimir(carro);

    return 0;
}
