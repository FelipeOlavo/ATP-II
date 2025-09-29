#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{

    int dia;
    int mes;
    int ano;

}Data;

typedef struct{

    char marca[20];
    char modelo[20];
    Data lancamento;

}Estrutura;


void leitura(Estrutura *carro)
{
    printf("Digite a marca do carro: ");
    fgets(carro->marca,20,stdin);
    carro->marca[strcspn(carro->marca,"\n")] = '\0';
    printf("Digite o modelo do carro: ");
    fgets(carro->modelo,20,stdin);
    carro->modelo[strcspn(carro->modelo,"\n")] = '\0';
    printf("Digite o dia, mes e o ano do lancamento do carro: ");
    scanf("%d%d%d",&carro->lancamento.dia,&carro->lancamento.mes,&carro->lancamento.ano);
}

void imprimir(Estrutura carro)
{
    printf("\nDados do carro\n");
    printf("Marca: %s\nModelo: %s\n",carro.marca,carro.modelo);
    printf("\nData de lancamento\n");
    printf("%d/%d/%d",carro.lancamento.dia,carro.lancamento.mes,carro.lancamento.ano);
}


int main(){

    Estrutura carro;

    leitura(&carro);

    imprimir(carro);

    return 0;
}
