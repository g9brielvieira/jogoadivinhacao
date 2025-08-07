#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // inicializa semente aleatória
    int numeroSecreto = rand() % 100 + 1; // número entre 1 e 100

    int tentativa = 0;
    int tentativasRestantes = 5;

    printf("=== Jogo de Adivinhação ===\n");
    printf("Tente adivinhar o número de 1 a 100!\n");

    while (tentativa != numeroSecreto && tentativasRestantes > 0) {
        printf("\nVocê tem %d tentativa(s) restante(s).\n", tentativasRestantes);
        printf("Digite seu palpite: ");
        scanf("%d", &tentativa);

        if (tentativa < numeroSecreto) {
            printf("Muito baixo!\n");
        } else if (tentativa > numeroSecreto) {
            printf("Muito alto!\n");
        }

        tentativasRestantes--;
    }

    if (tentativa == numeroSecreto) {
        printf("\n Parabéns! Você acertou o número %d!\n", numeroSecreto);
    } else {
        printf("\n Suas tentativas acabaram. O número era %d.\n", numeroSecreto);
    }

    return 0;
}
