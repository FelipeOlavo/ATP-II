#include<stdio.h>
#define NUM_ARRAY 10

int cont(char *pont){
    int maiuscula=0;
    for(int i=0;*(pont +i)!='\0';i++){
        if(*(pont+i)>='A' && *(pont +i)<='Z')
            maiuscula++;
    }
    return maiuscula;
}

int main(){
    char string[NUM_ARRAY];
    scanf("%s", string);
    char *ptr = string;
    int tam = cont(ptr);
    printf("O numero total de letras maisuculas = %d ",tam);

    return 0;
}
