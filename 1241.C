/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo: Verificar se B é o final de A.
Aprendizado: Trabalhar com números grandes como strings para comparação sem conversão numérica.
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    while (N--) {
        char A[1001], B[1001];
        scanf("%s %s", A, B);
        
        int lenA = strlen(A);
        int lenB = strlen(B);
        
        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            if (strcmp(A + lenA - lenB, B) == 0) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }
    
    return 0;
}
