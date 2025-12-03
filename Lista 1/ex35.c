#include<stdio.h>
#include<stdlib.h>


int main(int argc,char *argv[]){

    int numero = atoi(argv[1]);

        if(numero % 2==0){
            printf("O numero %d eh par!",numero);
        }else{
            printf("O numero %d eh impar!",numero);
        }

    return 0;
}
