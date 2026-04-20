/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/04/2026
Objetivo    : Identificar o maior valor entre 100 números inteiros e sua posição de entrada
Aprendizado : Uso de laço de repetição (for), estrutura condicional (if) e variáveis para armazenar maior valor e sua posição
-------------------------------------------------------------------------- */

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
