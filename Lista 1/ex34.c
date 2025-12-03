#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc,char *argv[]){

    printf("argumentos = %d\n",argc);

    int tam  = strlen(argv[1]);

    printf("a string %s tem %d caracteres! ",argv[1],tam);

    return 0;
}
