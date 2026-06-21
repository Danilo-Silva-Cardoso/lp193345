/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 21/06/2026
Objetivo    : Matriz em camadas(quadrada);
Aprendizado : usar a função menor para auxiliar e assim montar a matriz;
Duvidas :  Um pouco de dificuldade na logica;
-------------------------------------------------------------------------- */

#include <stdio.h>

menor(int a, int b) {
    int menor;
    
    if (a < b) {
        menor = a;
    } else {
        menor = b;
    }
    
    return menor;
    
}
 
int main() {
    
    int n;
 
    while(scanf("%d", &n) && n != 0) {
        
        int matriz[n][n];
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                
                int cima = i;
                int esquerda = j;
                int baixo = (n - 1) - i;
                int direita = (n - 1) - j;
                
                int valor = menor(menor(cima,esquerda), menor(baixo, direita)) + 1;
                
                if(j == 0) {
                    printf("%3d" , valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
        
    }
 
    return 0;
}
