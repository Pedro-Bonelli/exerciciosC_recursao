#include <stdio.h>

void imprime_decrescente(int);

int main(){
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    imprime_decrescente(n1);
    printf("\n");
}

void imprime_decrescente(int n1){
    if (n1 >= 0){
        printf("%d ", n1);
        imprime_decrescente(n1 - 1);
    }
}