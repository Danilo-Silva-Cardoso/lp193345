/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Gerar e exibir a tabuada de um número inteiro N, mostrando os resultados das multiplicações de 1 até 10.
Aprendizado : Uso de laço de repetição (for) para percorrer os valores de 1 a 10, realização de operações matemáticas (multiplicação) e formatação da saída para exibir os resultados no padrão solicitado.
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
    int valorfixo,valor,i;
    
    scanf("%d", &valorfixo) ;
    if (2<valorfixo && valorfixo <1000) {
            
        for(i=1;i<=10;i++) {
             
            valor=valorfixo*i;
            printf("%d x %d = %d\n", i, valorfixo, valor);
          
            }
        }
    return 0;
}

