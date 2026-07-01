#include <stdio.h>

void comparar(int *p1, int *p2);

int main() {
    int a, b;
    comparar(&a, &b);
    return 0;
}

void comparar(int *p1, int *p2) {
    if (p1 > p2) {
        printf("O maior endereco eh: %p\n", (void*)p1);
    } else {
        printf("O maior endereco eh: %p\n", (void*)p2);
    }
}