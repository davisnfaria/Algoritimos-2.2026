#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int n;
    printf("Quantidade de produtos: ");
    scanf("%d", &n);
    
    Produto *produtos = (Produto *)malloc(n * sizeof(Produto));
    
    for(int i = 0; i < n; i++) {
        printf("Codigo, Nome, Quantidade e Preco do produto %d:\n", i+1);
        scanf("%d %s %d %f", &produtos[i].codigo, produtos[i].nome, &produtos[i].quantidade, &produtos[i].preco);
    }
    
    int idx_maior_preco = 0, idx_maior_qtd = 0;
    for(int i = 1; i < n; i++) {
        if(produtos[i].preco > produtos[idx_maior_preco].preco) idx_maior_preco = i;
        if(produtos[i].quantidade > produtos[idx_maior_qtd].quantidade) idx_maior_qtd = i;
    }
    
    printf("\nProduto mais caro: %s (R$%.2f)\n", produtos[idx_maior_preco].nome, produtos[idx_maior_preco].preco);
    printf("Produto com mais estoque: %s (%d itens)\n", produtos[idx_maior_qtd].nome, produtos[idx_maior_qtd].quantidade);
    
    free(produtos);
    return 0;
}