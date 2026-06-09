#include <stdio.h>

int fatorial(int);
int fatorial_quadruplo(int);

int main(){
    int n1, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    r_valor = fatorial_quadruplo(n1);
    printf("Fatorial quadruplo = %d\n", r_valor);
}

int fatorial(int n1){
    if (n1 == 0 || n1 == 1){
        return 1;
    }
    return n1 * fatorial(n1 - 1);
}

int fatorial_quadruplo(int n1){
    return fatorial(2 * n1) / fatorial(n1);
}