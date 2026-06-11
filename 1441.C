/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 11/06/2026
Objetivo    : Sequêncua de Granizo
Aprendizado : utilizar recursividade
-------------------------------------------------------------------------- */

#include <stdio.h>

long long granizo(long long h) {
    if (h == 1)
        return 1;

    long long proximo;

    if (h % 2 == 0)
        proximo = h / 2;
    else
        proximo = 3 * h + 1;

    long long maior = granizo(proximo);

    if (h > maior)
        return h;

    return maior;
}

int main() {
    long long H;

    while (scanf("%lld", &H) && H != 0) {
        printf("%lld\n", granizo(H));
    }

    return 0;
}
