#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int qtd_nomes;
    int tamanho=20;
    char **nomes;

    printf("Insira a quantidade de nomes que voce vai inserir: ");
    scanf("%d",&qtd_nomes);
    fflush(stdin);

    nomes = (char**)malloc((qtd_nomes+1)*sizeof(char*));
    if(nomes==NULL){
        printf("\nMemoria insuficiente para ser alocada! ");
        return 1;
    }

    for(int i=0;i<qtd_nomes;i++){
        nomes[i] = (char*)malloc((tamanho+1)*sizeof(char));
        printf("Digite o %d nome: ",i+1);
        fgets(nomes[i],tamanho+1,stdin);
    }
    printf("\nOs nomes alocados:\n");

        for(int i=0;i<qtd_nomes;i++){
            printf("Nome %d = %s",i+1,nomes[i]);
        }

       int comparacao;
       char aux[20];

    for(int i=0;i<qtd_nomes;i++){
        for(int j=0;j<qtd_nomes-1;j++){
            comparacao = strcmp(nomes[j],nomes[j+1]);
            if(comparacao>0){
                strcpy(aux,nomes[j]);
                strcpy(nomes[j],nomes[j+1]);
                strcpy(nomes[j+1],aux);
            }
        }
    }

    printf("\nOs nomes colocados em ordem:\n");

        for(int i=0;i<qtd_nomes;i++){
            printf("nome %d = %s",i+1,nomes[i]);
        }

     //limpar o espaco agr

    for(int i=0;i<qtd_nomes;i++){
        free(nomes[i]);
    }
    free(nomes);

    return 0;
}
