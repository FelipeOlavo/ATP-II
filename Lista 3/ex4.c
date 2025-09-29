#include<stdio.h>
#include<string.h>

typedef struct{

    char nome[20];
    int matricula;
    int nota_final;

} Dados;

void leitura_dados(Dados *aluno){

    printf("Digite o nome do aluno: ");
    fgets((*aluno).nome,20,stdin);
    printf("\nA matricula do aluno (RA): ");
    scanf("%d",&(*aluno).matricula);
    printf("\nNota final do aluno: ");
    scanf("%d",&(*aluno).nota_final);

}

void imprimir(Dados aluno){

    printf("Nome do aluno: %s",aluno.nome);
    printf("Matricula do aluno : %d\n",aluno.matricula);
    printf("Nota final do aluno : %d",aluno.nota_final);

}

int main(){
    Dados aluno;

    leitura_dados(&aluno);

    imprimir(aluno);

    return 0;
}
