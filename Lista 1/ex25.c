#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void contador(char *ptr,int tam){

    int c=0,p=0,dentro;

    for(int i=0;i<tam;i++){
        if(ptr[i]!=' ' && ptr[i]!='\0'){
            c++;
        }

        if(ptr[i]!=' ' && !dentro){
            dentro=1;
            p++;
        }

       else if(ptr[i]==' '){
            dentro = 0;
       }

    }

    printf("Numero de caracteres: %d\n",c);
    printf("Numero de palavras: %d\n",p);

}

int main()
{

    char string[50];

    printf("Digite uma frase: ");
    fgets(string,50,stdin);

    int tam = strlen(string);
    char *ptr = string;

    contador(ptr,tam);

    return 0;
}
