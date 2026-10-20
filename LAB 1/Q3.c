#include <stdio.h>


int positivonegativo(int valor);

int main() {

    printf("Digite um numero: ");
    int num;
    if (scanf("%d", &num) != 1) return 1;
    positivonegativo(num);
    return 0;
}

int positivonegativo(int valor){
    if (valor > 0) {
        printf("1\n");
    } else if (valor < 0) {
        printf("-1\n");
    } else {
        printf("0\n");
    }
    return 0;
}