/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 28/04/2026
Objetivo    : Transformar uma sentença em uma “sentença dançante”, garantindo que a primeira letra seja maiúscula
e que as letras seguintes alternem entre maiúsculas e minúsculas, desconsiderando os espaços, mas mantendo-os na saída.
Aprendizado : Manipulação de strings, uso de estrutura de repetição (for) para percorrer os caracteres, uso de condição (if)
para alternar entre maiúsculas e minúsculas, e tratamento de caracteres especiais (espaços) sem afetar a lógica de alternância.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char linha[51];
    
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        linha[strcspn(linha, "\n")] = '\0';
        
        int proxima_maiuscula = 1;
        
        for (int i = 0; linha[i] != '\0'; i++) {
            if (linha[i] == ' ') {
                printf(" ");
            } else {
                if (proxima_maiuscula) {
                    printf("%c", toupper(linha[i]));
                } else {
                    printf("%c", tolower(linha[i]));
                }
                proxima_maiuscula = 1 - proxima_maiuscula;
            }
        }
        
        printf("\n"); 
    }
    
    return 0;
}
