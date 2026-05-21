/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
Data        : 30/03/2026
Objetivo    : Calcular a quantidade de litros de combustível gastos em uma viagem com base no tempo e na velocidade média.
Aprendizado : Aprendi a utilizar funções em C, realizar cálculos matemáticos, trabalhar com variáveis do tipo inteiro e float,
além de usar scanf e printf para entrada e saída de dados.
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int tempo, int velocidade) {
    
    return tempo*velocidade;

}
 
int main() {
    
    int tempo;
    int velocidade;
    
    float distancia;
    float quantLitros;
    
    scanf("%d %d", &tempo, &velocidade);
    
    distancia = calcularLitros(tempo, velocidade);
    
    quantLitros = distancia / 12;
    
    printf("%.3f\n", quantLitros);
    
 
    return 0;
}
