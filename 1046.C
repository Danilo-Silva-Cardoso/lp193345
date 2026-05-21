/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
Data        : 30/03/2026
Objetivo    : Calcular a duração de um jogo com base na hora inicial e final, considerando que o jogo pode terminar no dia seguinte.
Aprendizado : Aprendi a utilizar estruturas condicionais, criar funções em C, trabalhar com operações matemáticas e lógica de tempo,
além de usar scanf e printf para entrada e saída de dados.
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim){
    
    if(inicio < fim) {
        return fim - inicio;
    } else {
        return (24 - inicio) + fim;
      }
}

int main() {
    
    int inicio;
    int fim;
    int duracao;
    
    scanf("%d %d", &inicio, &fim);
    
    duracao = calcularDuracao(inicio, fim);
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
 
    return 0;
}
