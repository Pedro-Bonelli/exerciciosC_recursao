#include <stdio.h>

void inverte_vetor(float[], int, int);

int main(){
    float arr[100];
    int tam = 100;

    for(int i = 0; i < tam; i++){
        arr[i] = i * 1.5;
    }

    inverte_vetor(arr, 0, tam - 1);

    printf("Primeiro elemento invertido: %.2f\n", arr[0]);
    printf("Ultimo elemento invertido: %.2f\n", arr[99]);
}

void inverte_vetor(float arr[], int inicio, int fim){
    float temp;

    if (inicio < fim){
        temp = arr[inicio];
        arr[inicio] = arr[fim];
        arr[fim] = temp;
        inverte_vetor(arr, inicio + 1, fim - 1);
    }
}