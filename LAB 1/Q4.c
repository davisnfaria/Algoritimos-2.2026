#include <stdio.h>

int quadradoPerfeito(int n);

int main() {
    int num;
    printf("Digite um numero: ");
    if (scanf("%d", &num) != 1) return 1;
    if (quadradoPerfeito(num)) {
        printf("O numero eh um quadrado perfeito.\n");
    } else {
        printf("O numero nao eh um quadrado perfeito.\n");
    }
    return 0;
}

int quadradoPerfeito(int n){
    if (n < 0) {
        return 0;
    }
    int i = 0;
    while (i * i < n) {
        i++;
    }
    return (i * i == n);
}