#include <stdio.h>

int fatorial(int);

int main(){
    int n1, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    r_valor = fatorial(n1);
    printf("%d! = %d\n", n1, r_valor);
}

int fatorial(int n1){
    if (n1 == 0 || n1 == 1){
        return 1;
    }
    return n1 * fatorial(n1 - 1);
}