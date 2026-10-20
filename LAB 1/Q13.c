#include <stdio.h>

int calculuadora(int a, int b, char op);

int main() {
    int num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    resultado = calculuadora(num1, num2, operador);
    printf("Resultado: %d\n", resultado);

    return 0;
}

int calculuadora(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                printf("Erro: Divisao por zero.\n");
                return 0;
            }
        default:
            printf("Erro: Operador invalido.\n");
            return 0;
    }
}