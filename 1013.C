/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 02/04/2026
Objetivo    : Descobrir qual é o maior número entre 3 valores
Aprendizado : utilizar a fórmula para descobrir o maior
-------------------------------------------------------------------------- */

#include <stdlib.h>

int main() {
    int a, b, c, maior;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;
    
    printf("%d eh o maior\n", maior);

    return 0;
}
