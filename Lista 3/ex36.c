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

    char nome[20];
    char autor[20];
    float preco;
    Data lancamento;

}Cadastro;


void leitura_dados(Cadastro livros[])
{
    for(int i=0;i<NUM;i++)
    {
        printf("Digite o nome do livro %d ",i+1);
        fgets(livros[i].nome,20,stdin);
        livros[i].nome[strcspn(livros[i].nome,"\n")] = '\0';

        printf("\nDigite os dados do livro %s\n",livros[i].nome);
        printf("Nome do autor: ");
        fgets(livros[i].autor,20,stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
        printf("Digite o preco do livro: ");
        scanf("%f",&livros[i].preco);
        printf("Digite o dia,mes e o ano do lancamento do livro: ");
        scanf("%d%d%d",&livros[i].lancamento.dia,&livros[i].lancamento.mes,&livros[i].lancamento.ano);
        getchar();
        printf("\n");
    }

}

void imprimir(Cadastro livros[])
{
    for(int i=0;i<NUM;i++)
    {
        printf("\nDados do livro %s\n",livros[i].nome);
        printf("Autor: %s\nPreco: %.2f\n",livros[i].autor,livros[i].preco);
        printf("Lancamento: %d/%d/%d",livros[i].lancamento.dia,livros[i].lancamento.mes,livros[i].lancamento.ano);
        printf("\n");

    }
}


int main()
{
    Cadastro livros[NUM];

    leitura_dados(livros);

    imprimir(livros);

    return 0;
}
