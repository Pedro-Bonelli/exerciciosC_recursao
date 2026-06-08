#include <stdio.h>

int soma_cubos(int);

int main(){
    int n1, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    r_valor = soma_cubos(n1);
    printf("Soma dos cubos = %d\n", r_valor);
}

int soma_cubos(int n1){
    if (n1 == 1){
        return 1;
    }
    return (n1 * n1 * n1) + soma_cubos(n1 - 1);
}