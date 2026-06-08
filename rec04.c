#include <stdio.h>

int potencia(int, int);

int main(){
    int k, n, r_valor;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &k, &n);

    r_valor = potencia(k, n);
    printf("Resultado = %d\n", r_valor);
}

int potencia(int k, int n){
    if (n == 0){
        return 1;
    }
    return k * potencia(k, n - 1);
}