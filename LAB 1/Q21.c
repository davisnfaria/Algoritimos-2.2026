#include <stdio.h>
#include <string.h>

void num (int n);

int main() {
    int n;
    printf("Digite um valor inteiro: \n");
    scanf("%d", &n);
    num(n);
    return 0;
}

void num(int n){
    for(int i; i <= n; i++){
        for(int j = 0; j < i; j++){
            printf("!");
        }
        printf("\n");
    }
}