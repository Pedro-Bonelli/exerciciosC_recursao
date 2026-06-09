#include <stdio.h>

int tetranacci(int);

int main(){
    int n1, r_valor;

    printf("Digite o termo: ");
    scanf("%d", &n1);

    r_valor = tetranacci(n1);
    printf("Termo = %d\n", r_valor);
}

int tetranacci(int n1){
    if (n1 == 0 || n1 == 1 || n1 == 2){
        return 0;
    }
    if (n1 == 3){
        return 1;
    }
    return tetranacci(n1 - 1) + tetranacci(n1 - 2) + tetranacci(n1 - 3) + tetranacci(n1 - 4);
}