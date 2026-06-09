#include <stdio.h>

int tribonacci(int);

int main(){
    int n1, r_valor;

    printf("Digite o termo: ");
    scanf("%d", &n1);

    r_valor = tribonacci(n1);
    printf("Termo = %d\n", r_valor);
}

int tribonacci(int n1){
    if (n1 == 0 || n1 == 1){
        return 0;
    }
    if (n1 == 2){
        return 1;
    }
    return tribonacci(n1 - 1) + tribonacci(n1 - 2) + tribonacci(n1 - 3);
}