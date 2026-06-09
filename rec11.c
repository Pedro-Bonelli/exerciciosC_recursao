#include <stdio.h>

void exibe_array(int[], int);

int main(){
    int arr[5] = {15, 25, 35, 45, 55};
    int tam = 5;

    exibe_array(arr, tam);
    printf("\n");
}

void exibe_array(int arr[], int tam){
    if (tam > 0){
        printf("%d ", arr[0]);
        exibe_array(arr + 1, tam - 1);
    }
}