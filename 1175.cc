/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 20/06/2026
Objetivo    : inverter a ordem do vetor;
Aprendizado : Usar uma variavel aux para ajudar na logica; 
Duvidas :  Um pouco na lógica;
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int vetor[20];
    int aux;
    
    for(int i=0; i < 20 ; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        aux = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = aux;
    }
    
    for(int i = 0; i < 20 ; i++) {
        printf("N[%d] = %d\n", i , vetor[i]);
    }
 
    return 0;
}
