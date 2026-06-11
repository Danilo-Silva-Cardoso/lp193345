/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 11/06/2026
Objetivo    : Fazer mdc para a quantidade de figurinhas
Aprendizado : Aprendi a usar recursividade
-------------------------------------------------------------------------- */

#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;

    return mdc(b, a % b);
}

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int F1, F2;

        scanf("%d %d", &F1, &F2);

        printf("%d\n", mdc(F1, F2));
    }

    return 0;
}
