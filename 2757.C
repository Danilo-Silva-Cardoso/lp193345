/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2757
Data        : 07/04/2026
Objetivo    : Ler três valores inteiros e exibi-los em diferentes formatos de saída formatada
Aprendizado : Uso de entrada de dados (scanf), saída formatada (printf) com especificadores de largura, preenchimento com zeros e alinhamento, além de validação de intervalos com operadores lógicos
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    int a , b , c;
    
     scanf("%d", &a);
     if(-10000 >= a >= 10000){
         return 1;
     }
     
     scanf("%d", &b);
    if(0 >= b >= 99){
         return 1;
     }
     
     scanf("%d", &c);
    if(0 >= c >= 999){
         return 1;
     }

    printf("A = %d, B = %d, C = %d\n", a, b, c);
    printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
    printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
    printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);

    return 0;
}
