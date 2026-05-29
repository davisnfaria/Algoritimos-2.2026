#include <stdio.h>

int primo(int x) {
    if (x <= 1) return 0; 
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0; 
    }
    return 1;
}
int temp(int y){ 
    int temp = 0;
    for(int i = 2; i < y; i++){
        if(primo(i)){
            temp++;
        }
    }
    return temp;
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    int resultado = temp(n);
    printf("Quantidade de numeros primos menores que %d: %d\n", n, resultado);
    return 0;
}