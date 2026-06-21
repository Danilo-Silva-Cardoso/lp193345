/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 20/06/2026
Objetivo    : Sequêncua de Granizo
Aprendizado : utilizar recursividade
-------------------------------------------------------------------------- */

int sequencia(int h, int valor) {
    
    if(h == 1) {
        return valor;
    }
    
    if(h % 2 == 0) {
        h = h*0.5;
        if(h > valor) {
            valor = h;
        }
    }
    else {
        h = 3*h + 1;
        if(h > valor) {
            valor = h;
        }
    }
    
    return sequencia(h, valor);
}

#include <stdio.h>
 
int main() {
    
    int valor;
 
    int h;
    
    while(scanf("%d", &h) == 1 && h != 0) {
        valor = h;
        int resultado = sequencia(h, valor);  
        printf("%d\n", resultado);
    }

    return 0;
}
