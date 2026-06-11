/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 09/06/2026
Objetivo    : Fazer o tabuleiro de graos
Aprendizado : Aprendi a usar recursividade
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long quantgrao(unsigned long long casas, unsigned long long graos , unsigned long long total) {
    
    if ( casas == 0) {
        
        return total / 12000 ;
        
    } else {
        
        return quantgrao(casas - 1, graos * 2, total + graos);
        
    }
}

int main() {
    int testes;
    int casas;

    scanf("%d", &testes);

    while (testes > 0) {

        scanf("%d", &casas);

        unsigned long long graos = 1;
        unsigned long long total = 0;
        
        total = quantgrao(casas, graos, total);
        
        printf("%llu kg\n", total);

        testes--;
    }
    
    
    return 0;
    
}
