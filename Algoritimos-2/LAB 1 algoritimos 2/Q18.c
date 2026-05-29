#include <stdio.h>

int potencia(int x, int z);

int main() {
    int x, z;
    printf("Digite o valor de X e de Z:\n");
    scanf("%d %d", &x, &z);

    int resultado = potencia(x, z);
    printf("Resultado: %d\n", x, z, resultado);
    return 0;
}
int potencia(int x, int z) {
    int resultado = 1;
    for (int i = 0; i < z; i++) {
        resultado *= x;
    }
    return resultado;
}