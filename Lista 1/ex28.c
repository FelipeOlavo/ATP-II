#include<stdio.h>
#include<string.h>
#define TAM_STRING 20

void troca(char *pont){

    char caracter,substituto;
    printf("A string digitada: %s",pont);
    printf("\nDigite o caracter que voce deseja substituir: ");
    scanf(" %c",&caracter);
    printf("\nPara qual caracter voce deseja? ");
    scanf(" %c",&substituto);

        for(int i=0;i<TAM_STRING;i++){
            if(*(pont+i)==caracter){
                *(pont+i)=substituto;
            }
        }
}

int main(){
    char string[TAM_STRING];
    fgets(string,TAM_STRING,stdin);
    char *ptr = string;
    troca(ptr);
    printf("\nA nova string: %s",string);
    return 0;
}
