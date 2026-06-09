#include <stdio.h>

int fibg(int, int, int);

int main(){
    int f0, f1, n1, r_valor;

    printf("Digite f0, f1 e n: ");
    scanf("%d %d %d", &f0, &f1, &n1);

    r_valor = fibg(f0, f1, n1);
    printf("fibg(%d) = %d\n", n1, r_valor);
}

int fibg(int f0, int f1, int n1){
    if (n1 == 0){
        return f0;
    }
    if (n1 == 1){
        return f1;
    }
    return fibg(f0, f1, n1 - 1) + fibg(f0, f1, n1 - 2);
}