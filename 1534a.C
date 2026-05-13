/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 13/05/2026
Objetivo    : Matriz 123 usando operadores
Aprendizado : Aprender lógica de matrizes, diagonais e estruturas condicionais usando indexação normal com [].
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    
    int n;
 
    while (scanf("%d", &n) != EOF) {
        if (3 <= n && n < 70) {
            for(int i= 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    
                    if(i + j == n - 1) {
                        printf("%d", 2);
                    } else if(i == j){
                        printf("%d", 1);
                      } else {
                        printf("%d", 3); 
                        }
                }
            printf("\n");
            }
        }   
    }
 
    return 0;
}
