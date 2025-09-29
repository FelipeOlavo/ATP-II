#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char nome[20];
    int idade;
    int matricula;
    float nota1;
    float nota2;
    float media_final;


}Dados;

void leitura_dados(Dados *aluno){

        printf("Digite o nome do aluno : ");
        fgets(aluno->nome,20,stdin);
        printf("Digite a idade do aluno : ");
        scanf("%d",&aluno->idade);
        printf("Digite o RA do aluno : ");
        scanf("%d",&aluno->matricula);
        printf("Digite a nota 1 do aluno : ");
        scanf("%f",&aluno->nota1);
        printf("Digite a nota 2 do aluno : ");
        scanf("%f",&aluno->nota2);
        getchar();

        aluno->media_final = (aluno->nota1+aluno->nota2)/2;

}

void imprimir(Dados aluno)
{
        printf("\nDados do aluno: %s\n",aluno.nome);
        printf("Idade: %d\n",aluno.idade);
        printf("Ra do aluno: %d\n",aluno.matricula);
        printf("Nota 1: %.2f\nNota 2: %.2f\nMedia final eh: %.2f",aluno.nota1,aluno.nota2,aluno.media_final);
        printf("\n");

}


int main(){

    Dados aluno;

    leitura_dados(&aluno);

    imprimir(aluno);


    return 0;
}
