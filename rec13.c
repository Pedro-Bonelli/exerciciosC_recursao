#include <stdio.h>

int SomaSerie(int, int, int);

int main(){
    int i, j, k, r_valor;

    printf("Digite os valores de i, j e k: ");
    scanf("%d %d %d", &i, &j, &k);

    r_valor = SomaSerie(i, j, k);
    printf("Soma da serie = %d\n", r_valor);
}

int SomaSerie(int i, int j, int k){
    if (i > j){
        return 0;
    }
    return i + SomaSerie(i + k, j, k);
}