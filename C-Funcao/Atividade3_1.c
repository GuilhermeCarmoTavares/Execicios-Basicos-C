// GUILHERME CARMO TAVARES

#include <stdio.h>

typedef struct {
    double peso;
    int idade;
    double altura;
} Pessoa;

// imprimir os dados de uma pessoa
void imprimePessoa(Pessoa p) {
    printf("Peso: %.1lf, Idade: %d, Altura: %.2lf\n", p.peso, p.idade, p.altura);
}

//  preencher os dados das pessoas no vetor
void preenchePessoas(Pessoa pessoas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o peso, idade e altura da pessoa %d:\n", i + 1);
        scanf("%lf %d %lf", &pessoas[i].peso, &pessoas[i].idade, &pessoas[i].altura);
    }
}

int main() {
    Pessoa pessoas[5], p1;

    //  preencher os dados do vetor pessoas
    preenchePessoas(pessoas, 5);

    p1 = pessoas[0];

    // idade de p1 caso a idade seja maior que 20
    if (p1.idade > 20) {
        p1.idade++;
    }

    pessoas[1] = pessoas[0];

    imprimePessoa(p1);
    imprimePessoa(pessoas[0]);
    imprimePessoa(pessoas[1]);
    imprimePessoa(pessoas[2]);
    imprimePessoa(pessoas[3]);
    imprimePessoa(pessoas[4]);

    return 0;
}
