/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/04/2026
Objetivo    : Encontrar o maior valor entre 100 números armazenados em um vetor e indicar sua posição
Aprendizado : Uso de vetores, laço de repetição (for), estrutura condicional (if) e manipulação de índices
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int valor, maior, posicao = 1;

    scanf("%d", &maior);

    for (int i = 2; i <= 100; i++) {
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}
