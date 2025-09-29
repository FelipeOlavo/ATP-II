#include<stdio.h>
#include<string.h>

struct data{
    int dia;
    int mes;
    int ano;

};

struct informacoes_livro{

    char titulo[20];
    char autor[20];
    struct data publicacao;

};

void imprimir(struct informacoes_livro livro){

    printf("O titulo eh: %s",livro.titulo);
    printf("\nO autor eh: %s",livro.autor);
    printf("\nO dia mes e ano eh : %d/%d/%d\n",livro.publicacao.dia,livro.publicacao.mes,livro.publicacao.ano);


}


int main(){
    struct informacoes_livro livro;

    printf("Titulo do livro: ");
    gets(livro.titulo);
    printf("Auto do livro: ");
    gets(livro.autor);
    printf("Digite o dia/mes/ano da publicacao: ");
    scanf("%d %d %d",&livro.publicacao.dia,&livro.publicacao.mes,&livro.publicacao.ano);

   imprimir(livro);

    return 0;
}
