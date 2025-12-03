#include<stdio.h>
#include<stdlib.h>
#define NUM_ARRAY 5

int main(int argc,char *argv[]){

    for(int i=1;i<argc;i++){
        int numero = atoi(argv[i]);
    }

    int maior = atoi(argv[1]);

    for(int i=2;i<argc;i++){
        if(atoi(argv[i])>maior){
            maior = atoi(argv[i]);
        }
    }

    printf("O maior eh: %d",maior);


    return 0;
}
