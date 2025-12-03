#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char **strings;
    int qtd,tamanho=20;

    printf("\nDigite a quantidade de strings que serao inseridas: ");
    scanf("%d",&qtd);
    getchar();

    strings = malloc(qtd*sizeof(char*));

    for(int i=0;i<qtd;i++){
        strings[i] = malloc((tamanho+1)*sizeof(char));
        printf("\nDigite a string %d: ",i+1);
        fgets(strings[i],tamanho+1,stdin);
    }

    int comp_maior=0;

    for(int i=0;i<qtd;i++){
        if(strlen(strings[i])>strlen(strings[comp_maior])){
            comp_maior =i;
        }
    }

    for(int i=0;i<qtd;i++){
        printf("\nA string %d = %s",i+1,strings[i]);
    }

    printf("\nDessas strings a maior de comprimento eh: ");

    printf(" string %d = %s",comp_maior+1,strings[comp_maior]);

    for(int i=0;i<qtd;i++){
        free(strings[i]);
    }
    free(strings);

    return 0;
}
