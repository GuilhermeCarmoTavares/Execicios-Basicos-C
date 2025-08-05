// GUILHERME CARMO TAVARES
#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char modelo[50];
    int ano;
    double preco;
} Carro;

// modificar o preço do carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;
}

//imprimir os dados do carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
    printf("Preco: R$ %.2lf\n", c->preco);
}

int main() {
    Carro carro1;

    // Inicializa os dados do carro
    strcpy(carro1.modelo, "Xyz");
    carro1.ano = 2020;
    carro1.preco = 90000.00;

    // Exibe
    printf("Dados antes da modificacao:\n");
    imprimirCarro(&carro1);

    // Modifica o preço do carro
    modificarPreco(&carro1, 115000.00);

    // Exibe os dados após a modificação do preço
    printf("\nDados apos a modificacao do preco:\n");
    imprimirCarro(&carro1)


    return 0;
}
