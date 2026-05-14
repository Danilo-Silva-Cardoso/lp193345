/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 14/05/2026
Objetivo    : Matriz 123 usando operadores
Aprendizado : Aprender manipulação de memória e aritmética de ponteiros em C sem utilizar o operador [].
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    
    int n;
    int *p;
    
 
    while (scanf("%d", &n) != EOF) {
        
        p= &n;
        
        if (3 <= *p && *p < 70) {
            int i = 0;
            for(int *pi= &i ; *pi < *p ; (*pi)++){
                int j = 0;
                for(int *pj = &j ; *pj < *p; (*pj)++){
                    
                    if(*pi + *pj == *p - 1) {
                        printf("%d", 2);
                    } else if(*pi == *pj){
                        printf("%d", 1);
                      } else {
                        printf("%d", 3); 
                        }
                }
            printf("\n");
            }
        }   
    }
 
    return 0;
    
}
