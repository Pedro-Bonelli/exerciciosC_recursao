#include <stdio.h>

int Multip_Rec(int, int);

int main(){
    int n1, n2, r_valor;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    r_valor = Multip_Rec(n1, n2);
    printf("Multiplicacao = %d\n", r_valor);
}

int Multip_Rec(int n1, int n2){
    if (n2 == 0){
        return 0;
    }
    return n1 + Multip_Rec(n1, n2 - 1);
}