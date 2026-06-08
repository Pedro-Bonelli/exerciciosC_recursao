#include <stdio.h>

int somatorio(int);

int main(){
    int n1, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    r_valor = somatorio(n1);
    printf("Somatorio = %d\n", r_valor);
}

int somatorio(int n1){
    if (n1 == 0){
        return 0;
    }
    return n1 + somatorio(n1 - 1);
}