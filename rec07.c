#include <stdio.h>

void imprime_crescente(int);

int main(){
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    imprime_crescente(n1);
    printf("\n");
}

void imprime_crescente(int n1){
    if (n1 >= 0){
        imprime_crescente(n1 - 1);
        printf("%d ", n1);
    }
}