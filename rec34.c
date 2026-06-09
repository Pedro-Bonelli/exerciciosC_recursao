#include <stdio.h>

int inverte_aux(int, int);
int inverte_num(int);

int main(){
    int n1, r_valor;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    r_valor = inverte_num(n1);
    printf("Invertido = %d\n", r_valor);
}

int inverte_aux(int n1, int inv){
    if (n1 == 0){
        return inv;
    }
    return inverte_aux(n1 / 10, (inv * 10) + (n1 % 10));
}

int inverte_num(int n1){
    return inverte_aux(n1, 0);
}