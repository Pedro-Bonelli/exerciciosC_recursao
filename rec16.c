#include <stdio.h>

int fatorial_duplo(int);

int main(){
    int n1, r_valor;

    printf("Digite um numero impar: ");
    scanf("%d", &n1);

    r_valor = fatorial_duplo(n1);
    printf("Fatorial duplo = %d\n", r_valor);
}

int fatorial_duplo(int n1){
    if (n1 == 1){
        return 1;
    }
    return n1 * fatorial_duplo(n1 - 2);
}