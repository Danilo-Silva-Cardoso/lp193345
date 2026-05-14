/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Distância Entre Dois Pontos
Aprendizado : Utilizar o math.h , manipulação de double e ultilizar 4 casas decimais e função
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

double calculardistancia(double x1, double x2, double y1, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    
    return sqrt((dx * dx) + (dy * dy));
}
 
int main() {
 
    double x1, x2, y1, y2;
    double p1, p2;
    double distancia;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    distancia = calculardistancia(x1, x2, y1, y2);
    
    printf("%.4lf\n", distancia);
    
    return 0;
}
