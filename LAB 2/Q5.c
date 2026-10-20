#include <stdio.h>

void ordenar_maior_menor(int *varm, int *varn);

int main() {
    int v1, v2;
    printf("Digite o valor do primeiro numero: \n");
    scanf("%d", &v1);
    
    printf("Digite o valor do segundo numero: \n");
    scanf("%d", &v2);

    ordenar_maior_menor(&v1, &v2);

    printf("As variaveis ordenadas (Maior, Menor): %d, %d\n", v1, v2);
    return 0;
}

void ordenar_maior_menor(int *varm, int *varn) {
    int temp;
    // Se o segundo for maior que o primeiro, invertemos
    if (*varn > *varm) {
        temp = *varn;
        *varn = *varm;
        *varm = temp;
    }
}