//Guilherme Carmo Tavares
#include <stdio.h>

int main() {
    int pontos[3][5];
    int soma[3] = {0, 0, 0};
    int vencedor = 0;

    // Entrada dos dados
    for (int i = 0; i < 3; i++) {
        printf("Digite as pontuações do jogador %d para 5 jogos:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &pontos[i][j]);
            soma[i] += pontos[i][j];
        }
    }

    // Determinar o vencedor
    for (int i = 1; i < 3; i++) {
        if (soma[i] > soma[vencedor]) {
            vencedor = i;
        }
    }

    // Exibir resultados
    printf("\nPontuação dos Jogadores:\n");
    for (int i = 0; i < 3; i++) {
        printf("Jogador %d: %d pontos\n", i + 1, soma[i]);
    }
    printf("Vencedor: Jogador %d\n", vencedor + 1);

    return 0;
}
