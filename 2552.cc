/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 20/06/2026
Objetivo    : Descobrir em um matriz onde tem pão de queijo;
Aprendizado : Utilizar matriz e comparar os numeros adjacentes; 
Duvidas :  Um pouco na lógica;
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int n, m;
    
    while(scanf("%d %d", &n, &m) != EOF) {
    
        int matriz[n][m];
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matriz[i][j] == 1) {
                    printf("9");
                }
                else {
                    int contador = 0;
                    if (j > 0 && matriz[i][j - 1] == 1) contador++;
                    if (j < m - 1 && matriz[i][j + 1] == 1) contador++;
                    if (i > 0 && matriz[i - 1][j] == 1) contador++;
                    if (i < n - 1 && matriz[i + 1][j] == 1) contador++;
                    printf("%d", contador);
                }
            }
            
            printf("\n");
        }
    }
    
    return 0;
}
