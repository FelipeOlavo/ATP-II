#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
  int numero_strings;
  int tamanho=50;
  char **nomes;

  printf("Digite a quantidade de nomes que serao inseridos: ");
  scanf("%d",&numero_strings);
  fflush(stdin);

  nomes = (char**)malloc((numero_strings+1)*sizeof(char*));

    if(nomes==NULL){
        printf("\nNao tem como alocar");
        return 1;
    }

    for(int i=0;i<numero_strings;i++){
        nomes[i] = (char*)malloc((tamanho+1)*sizeof(char));
        printf("Digite o nome %d: ",i+1);
        fgets(nomes[i],tamanho+1,stdin);
    }

    printf("\nOs nomes inseridos:\n");

    for(int i=0;i<numero_strings;i++){
        printf("nome %d = %s",i+1,nomes[i]);
    }

    for(int i=0;i<numero_strings;i++){
        free(nomes[i]);
    }
    free(nomes);

  return 0;
}

