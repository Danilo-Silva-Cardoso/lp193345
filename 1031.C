/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 22/06/2026
Objetivo    : o Problema de Josephus de regioes;
Aprendizado : aprimoramento da formula de Josephus;
-------------------------------------------------------------------------- */

#include <stdio.h>

int ultima_regiao(int n,int m) {
    
    int regiao = 0;
    
    for (int i = 2; i <= n; i++) {
        regiao = (regiao + m) % i;
    }
        
    return regiao + 1;    
    
}
 
int main() {
 
    int n;
    
    while(scanf("%d", &n) && n != 0) {
        
        int m = 1;
        
        while(1) {
            
            if (ultima_regiao(n -1 , m) == 12) {
                printf("%d\n", m);
                break;
            }
            m = m + 1;
        }
    }
    return 0;
}
