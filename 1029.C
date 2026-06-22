/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 21/06/2026
Objetivo    : Utilizar a sequêcia de fibonacciequêcia de ;
Aprendizado : utilzar o ponteiro para saber a quantidade de calls e um pouco mais sobre recursividade; 
Duvidas :  Tava bugando pois não estava usando ponteiro no call;
-------------------------------------------------------------------------- */

#include <stdio.h>

typedef struct {
    int call;
    int resultado;
} fibonati;

int fibonacci(int n, int *(call)) {
    
    (*call)++;
    
    if (n == 0)
        return 0;
        
    if (n == 1)
        return 1;
    
    return fibonacci(n - 1, call) + fibonacci(n - 2, call);
}
 
int main() {
 
    int n;
    int x;
    
    fibonati r;
    
    if (scanf("%d", &n) != 1) return 0;
    
    while(n--) {
        scanf("%d", &x);
        
        r.call = 0 ;
        
        r.resultado = fibonacci(x, &r.call);
        
        printf("fib(%d) = %d calls = %d\n", x, r.call - 1, r.resultado);
    }
 
    return 0;
}
