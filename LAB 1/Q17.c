#include <stdio.h>

int soma(int a, int b);

int main () {
    int n1, n2, resultado;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    resultado = soma(n1, n2);
    printf("Resultado: %d\n", resultado);

    return 0;
}

int soma (int a, int b) {
    int soma = 0;
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++){
        soma += i;
    }
    return soma;
}