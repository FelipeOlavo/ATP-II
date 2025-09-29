#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define QTD_ALU 3

typedef struct{
    char nome[20];
    int idade;
    int matricula;
    float nota1;
    float nota2;
    float media_final;


}Dados;

void leitura_dados(Dados alunos[]){

    for(int i=0;i<QTD_ALU;i++){
        printf("Digite o nome do aluno %d: ",i+1);
        fgets(alunos[i].nome,20,stdin);
        printf("Digite a idade do aluno %d: ",i+1);
        scanf("%d",&alunos[i].idade);
        printf("Digite o RA do aluno %d: ",i+1);
        scanf("%d",&alunos[i].matricula);
        printf("Digite a nota 1 do aluno %d: ",i+1);
        scanf("%f",&alunos[i].nota1);
        printf("Digite a nota 2 do aluno %d: ",i+1);
        scanf("%f",&alunos[i].nota2);
        getchar();

        alunos[i].media_final = (alunos[i].nota1+alunos[i].nota2)/2;

    }

}

void imprimir(Dados alunos[])
{
    for(int i=0;i<QTD_ALU;i++){
        printf("\nDados do aluno: %s\n",alunos[i].nome);
        printf("Idade: %d\n",alunos[i].idade);
        printf("Ra do aluno: %d\n",alunos[i].matricula);
        printf("Nota 1: %.2f\nNota 2: %.2f\nMedia final eh: %f",alunos[i].nota1,alunos[i].nota2,alunos[i].media_final);
        printf("\n");
    }

}


int main(){

    Dados alunos[QTD_ALU];

    leitura_dados(alunos);

    imprimir(alunos);


    return 0;
}
