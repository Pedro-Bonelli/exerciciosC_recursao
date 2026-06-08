#include <stdio.h>

int fibonacci(int);

int main(){
    int n1, r_valor;

    printf("Digite o termo: ");
    scanf("%d", &n1);

    r_valor = fibonacci(n1);
    printf("Termo %d = %d\n", n1, r_valor);
}

int fibonacci(int n1){
    if (n1 == 0){
        return 0;
    }
    if (n1 == 1){
        return 1;
    }
    return fibonacci(n1 - 1) + fibonacci(n1 - 2);
}