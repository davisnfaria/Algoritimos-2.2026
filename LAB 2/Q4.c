#include <stdio.h>

void swap(int *veta, int *vetb);

int main() {
    int a, b;
    printf("Digite o valor de A e B: \n");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    swap(&a, &b);

    printf("O valor de A agora eh: %d\n", a);
    printf("O valor de B agora eh: %d\n", b);

    return 0;
}

void swap(int *veta, int *vetb) {
    int temp;
    temp = *veta;
    *veta = *vetb;
    *vetb = temp;
}