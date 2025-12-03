#include<stdio.h>
#define NUM_ARRAY 5

void positivo(int *pont)
{
    int flag = 1;
    for(int i=0;i<NUM_ARRAY;i++){
        if(*(pont+i)<0){
            flag=0;
        }
    }
    if(flag)
        printf("Todos sao positivos!");
    else
        printf("Nem todos sao positivos");
}
int main(){
    int array[NUM_ARRAY];
        for(int i=0;i<NUM_ARRAY;i++){
            printf("Digite o %d elemento: ",i+1);
            scanf("%d",&array[i]);
        }
    int *ptr = array;
    positivo(ptr);
    return 0;
}
