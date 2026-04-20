/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/04/2026
Objetivo    : Encontrar o maior valor entre 100 números armazenados em um vetor e indicar sua posição
Aprendizado : Aprendizado : Uso de vetores, laço de repetição (for), estrutura condicional (if) e manipulação de índices
-------------------------------------------------------------------------- */

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
