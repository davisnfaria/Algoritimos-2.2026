#include <stdio.h>

int formaTriangulo(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void tipoTriangulo(int a, int b, int c) {
    if (a == b && b == c) {
        printf("Triangulo Equilatero\n");
    } else if (a == b || b == c || a == c) {
        printf("Triangulo Isosceles\n");
    } else {
        printf("Triangulo Escaleno\n");
    }
}

int main() {
    int a, b, c;

    printf("Digite os comprimentos dos lados do triangulo:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (formaTriangulo(a, b, c)) {
        tipoTriangulo(a, b, c);
    } else {
        printf("Nao forma um triangulo\n");
    }

    return 0;
}