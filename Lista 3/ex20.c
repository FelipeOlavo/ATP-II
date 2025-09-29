#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NUM 3


typedef struct{

    int dia;
    int mes;
    int ano;

}Data;

typedef struct{

    char titulo[20];
    char autor[20];
    Data lancamento;

}informacao;

void leitura_dados(informacao autores[])
{
    for(int i=0;i<NUM;i++)
    {
        printf("\nDigite as informacao do autor[%d]\n",i+1);

        printf("Digite o titulo: ");
        fgets(autores[i].titulo,20,stdin);
        autores[i].titulo[strcspn(autores[i].titulo,"\n")] = '\0';
        printf("Digite o nome do autor: ");
        fgets(autores[i].autor,20,stdin);
        autores[i].autor[strcspn(autores[i].autor, "\n")] = '\0';
        printf("Digite a data do lancamento, dia, mes e ano: ");
        scanf("%d%d%d",&autores[i].lancamento.dia,&autores[i].lancamento.mes,&autores[i].lancamento.ano);
        getchar();
    }
}

void imprimir(informacao autores[])
{
    for(int i=0;i<NUM;i++){
        printf("\nInformacao do autor[%s]\n",autores[i].autor);
        printf("Titulo do livro: %s\n",autores[i].titulo);
        printf("Data\n");
        printf("%d/%d/%d",autores[i].lancamento.dia,autores[i].lancamento.mes,autores[i].lancamento.ano);
    }

}


int main(){

    informacao autores[NUM];

    leitura_dados(autores);

    imprimir(autores);


    return 0;
}
