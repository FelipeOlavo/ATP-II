#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{

    char nome[20];
    char disciplina[20];
    float salario;

}Dados;


void leitura_dados(Dados *professor){

    printf("Digite o nome do professor: ");
    fgets(professor->nome,20,stdin);
    professor->nome[strcspn(professor->nome,"\n")] = '\0';
    printf("Digite a disciplina que esse professor da aula: ");
    fgets(professor->disciplina,20,stdin);
    professor->disciplina[strcspn(professor->disciplina,"\n")] = '\0';
    printf("Digite o salario desse professor: ");
    scanf("%f",&professor->salario);

}

void imprimir(Dados professor)
{
    printf("\nDados do professor\n");
    printf("Nome: %s\nDisciplina: %s\nSalario: %f",professor.nome,professor.disciplina,professor.salario);
}

int main()
{
    Dados professor;

    leitura_dados(&professor);

    imprimir(professor);

    return 0;
}
