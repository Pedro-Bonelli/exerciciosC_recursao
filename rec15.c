#include <stdio.h>

float serie_S(int);

int main(){
    int n1;
    float r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    r_valor = serie_S(n1);
    printf("Valor da serie = %.2f\n", r_valor);
}

float serie_S(int n1){
    if (n1 == 1){
        return 2.0;
    }
    return ((1.0 + (n1 * n1)) / n1) + serie_S(n1 - 1);
}