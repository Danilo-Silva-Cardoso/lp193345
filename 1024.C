/* --------------------------------------------------------------------------

Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo: Implementar um algoritmo de criptografia em três etapas (deslocamento ASCII, inversão de string e manipulação de metade da cadeia de caracteres).
Aprendizado: Manipulação de strings e caracteres via tabela ASCII, uso de métodos de inversão de sequências (reverse),
lógica de truncamento de inteiros para divisão de strings e aplicação de múltiplas passadas de processamento sobre o mesmo dado.

-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
 
    int linhas;
    char letras[1001];
    int inversa;
    
    scanf("%d\n", &linhas);
    1 <= linhas && linhas >= 10000;
    
    while(linhas--) {
        fgets(letras, 1001, stdin);
        letras[strcspn(letras, "\n")] = '\0';
    
        int tamanho = strlen(letras);
        int meio= tamanho / 2;
    
        for(int i=0; letras[i] != '\0'; i++){
            if (isalpha((unsigned char)letras[i])) {
                letras[i] = letras[i] + 3; 
            }
        }
    
        for(int i = 0; i < tamanho / 2; i++){
            inversa = letras[i];
            letras[i] = letras[tamanho - i - 1];
            letras[tamanho - i - 1] = inversa;
        }  
    
        for (int i = meio; i < tamanho; i++) {
            letras[i] = letras[i] - 1; 
        }
        
        printf("%s\n", letras);
    }
    
    return 0;
}
