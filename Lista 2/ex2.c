#   include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(int matriz[][4]){
    int sum=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                sum = sum + matriz[i][j];
            }
        }
        return sum;
}

int main(){
    int matriz[4][4];
    srand(time(NULL));
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                matriz[i][j] = (rand()%(10))+1;
            }
        }

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                printf("%d ",matriz[i][j]);
            }
            printf("\n");
        }

    printf("\nA soma de todos os elementos da matriz e: %d",soma(matriz));

    return 0;
}

