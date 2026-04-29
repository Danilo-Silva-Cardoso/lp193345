/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 29/04/2026
Objetivo: Decodificar mensagens criptografadas utilizando a Cifra de César, deslocando cada letra do texto um determinado 
número de posições para a esquerda no alfabeto, com retorno ao início quando necessário.
Aprendizado: Manipulação de strings, uso de laços de repetição (for) para percorrer os caracteres, aplicação
de operações matemáticas para deslocamento no alfabeto (incluindo uso de módulo para circular entre ‘A’ e ‘Z’), e leitura de múltiplos casos de teste.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;                             
    char texto[51];                     
    int deslocamento;                 
    int i, j;                          
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf(" %[^\n]", texto);
        
        scanf("%d", &deslocamento);
        
        for (j = 0; j < strlen(texto); j++) {

            if (texto[j] >= 'A' && texto[j] <= 'Z') {

                char original = texto[j] - deslocamento;
                
                if (original < 'A') {
                    original = original + 26; 
                }
                
                printf("%c", original);
            } else {
                printf("%c", texto[j]);
            }
        }
        printf("\n"); 
    }
    
    return 0;
}
