#include <stdio.h>
#define LIN 3
#define COL 3

int verificar(int mat[LIN][COL]){
    for(int i=1; i<LIN; i++){
        for(int j=1; j<COL; j++){
            if(mat[i][j] != mat[i-1][j-1]){
                return 0;
            }
        }
    }

    return 1;
}

int main(){
    int mat[LIN][COL];

    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            printf("Matriz na linha: %d, coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz fornecida:\n");
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if(verificar(mat) == 1){
        printf("\nA matriz é toeplitz.\n");
    } else{
        printf("\nA matriz não é toeplitz.\n");
    }

    return 0;
}
