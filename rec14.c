#include <stdio.h>

void ImprimeSerie(int, int, int);

int main(){
    int i, j, k;

    printf("Digite os valores de i, j e k: ");
    scanf("%d %d %d", &i, &j, &k);

    ImprimeSerie(i, j, k);
    printf("\n");
}

void ImprimeSerie(int i, int j, int k){
    if (i > j){
        return;
    }
    printf("%d ", i);
    ImprimeSerie(i + k, j, k);
}