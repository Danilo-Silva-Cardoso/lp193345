/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Distância Entre Dois Pontos
Aprendizado : Utilizar o math.h , manipulação de double e ultilizar 4 casas decimais
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>
 
int main() {
 
    double x1, x2, y1, y2;
    double p1, p2;
    double distancia;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    p1 = (x2-x1)*(x2-x1);
    
    p2 = (y2-y1)*(y2-y1);
    
    distancia = sqrt(p1+p2);
    
    printf("%.4lf\n", distancia);
    
    return 0;
}

