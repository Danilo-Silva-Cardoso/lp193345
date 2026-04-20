/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 16/04/2026
Objetivo    : Calcular a soma dos números ímpares entre dois valores inteiros
Aprendizado : Uso de estruturas condicionais (if/else), laço de repetição (for) e operador de resto (%) para identificar números ímpares
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    int a, b, soma = 0;
    int inicio, fim, i;
    scanf("%d %d", &a, &b);
    
    if(a < b){
            inicio = a;
            fim = b;
    }   else {
        fim = a;
        inicio = b;
    }
    
    for(i = inicio + 1; i < fim; i++) {
        if(i % 2 != 0) {
            soma = soma + i;
        }
    }
    
    printf("%d\n", soma);
    
    return 0;
}
