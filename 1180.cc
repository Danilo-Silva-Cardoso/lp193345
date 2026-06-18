/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 1/06/2026
Objetivo    : Encontrar o menor e a posição com vetor;
Aprendizado : Utilizar vetor e junto com função e uitlizar struct; 
Duvidas :  Um pouco em struct;
-------------------------------------------------------------------------- */

#include <stdio.h>

typedef struct {
    int menor;
    int posicao;
} resultado;

resultado menor(int n, int vetor[1000]) {
    
    resultado res;

    res.menor = vetor[0];
    res.posicao = 0;
    
    for(int i = 0; i < n; i++) {
        if (vetor[i] < res.menor) {
            res.menor = vetor[i];
            res.posicao = i; 
        }
    } 
  
    return res;
  
}
 
int main() {
    
    int n;
    resultado r;
    
    scanf("%d", &n);
    
    int vetor[1000];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    r = menor(n , vetor);

    printf("Menor valor: %d\n", r.menor);
    printf("Posicao: %d\n", r.posicao);
 
    return 0;
}
