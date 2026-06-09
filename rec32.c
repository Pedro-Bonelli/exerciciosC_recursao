#include <stdio.h>

void dec_para_bin(int);

int main(){
    int n1;

    printf("Digite um numero decimal: ");
    scanf("%d", &n1);

    dec_para_bin(n1);
    printf("\n");
}

void dec_para_bin(int n1){
    if (n1 > 0){
        dec_para_bin(n1 / 2);
        printf("%d", n1 % 2);
    }
}