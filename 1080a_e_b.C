//sem vetor

#include <stdio.h>

int main() {
    int valor, maior = 0, posicao = 0;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}

//com vetor

#include <stdio.h>

int main() {
    int vetor[100];
    int maior, posicao = 1;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (int i = 1; i < 100; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i + 1;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}
