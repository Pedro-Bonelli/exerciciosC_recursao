#include <stdio.h>

int seq_f(int);

int main(){
    int n1, r_valor;

    printf("Digite o termo: ");
    scanf("%d", &n1);

    r_valor = seq_f(n1);
    printf("F(%d) = %d\n", n1, r_valor);
}

int seq_f(int n1){
    if (n1 == 1){
        return 1;
    }
    if (n1 == 2){
        return 2;
    }
    return 2 * seq_f(n1 - 1) + 3 * seq_f(n1 - 2);
}