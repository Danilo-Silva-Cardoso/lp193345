/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 22/06/2026
Objetivo: Descobrir quem é o sobrevivente da mesa
Aprendizado: Utilizar recursão para achar a posição do sobrevivente
-------------------------------------------------------------------------- */

#include <stdio.h>

int josephus(int n, int k) {
    
    int r = 0;
    
    for(int i=2; i <= n; i++) {
        r = (r + k) % i;
    }
    
    return r;
}
 
int main() {
    
    int nc;
    
    if(scanf("%d", &nc) != 1) return 0;
    
    for(int i = 1; i <= nc; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
            
        int sobrevivente = josephus(n,k) + 1;
            
        printf("Case %d: %d\n", i , sobrevivente);
    }

    return 0;
}
