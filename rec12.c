#include <stdio.h>

int menor_elemento(int[], int);

int main(){
    int arr[5] = {84, 23, 11, 56, 32};
    int tam = 5;
    int r_valor;

    r_valor = menor_elemento(arr, tam);
    printf("Menor elemento = %d\n", r_valor);
}

int menor_elemento(int arr[], int tam){
    int menor_resto;

    if (tam == 1){
        return arr[0];
    }

    menor_resto = menor_elemento(arr, tam - 1);

    if (arr[tam - 1] < menor_resto){
        return arr[tam - 1];
    }
    return menor_resto;
}