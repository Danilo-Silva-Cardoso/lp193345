/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 21/06/2026
Objetivo    : Deixar as camisetas em ordem correta por cor, tamanho e nome;
Aprendizado : Usar qsort junto a struct e ponteiros e também utilizar o strcomp para ajustar a comparação
Duvidas :  Qsort é muito complexo e um pouco confuso;
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char cor[9];
    char tam[3];
} camiseta;

int compara(const void *a, const void *b) {
    
    const camiseta *c1 = (const camiseta *)a;
    const camiseta *c2 = (const camiseta *)b;

    int res_cor = strcmp(c1->cor, c2->cor);

    if (res_cor != 0) {
        return res_cor; 
    }
    
    int res_tam = strcmp(c2->tam, c1->tam);
    
    if (res_tam != 0) {
        return res_tam;
    }
    
    return strcmp(c1->nome, c2->nome);
    
}

int main() {
    int n;
    int primeiro = 1;
        
    while(scanf("%d", &n) && n != 0) {
        
        if (!primeiro) {
            printf("\n");
        }
        
        primeiro = 0;
        
        camiseta lista[n];
        
        for(int i = 0; i < n; i++) {
            scanf(" %[^\n]", lista[i].nome); 
            scanf("%s %s", lista[i].cor, lista[i].tam);
        }
        
        qsort(lista, n, sizeof(camiseta), compara);
    
        for(int i = 0; i < n; i++) {
            printf("%s %s %s\n", lista[i].cor, lista[i].tam, lista[i].nome);
        }
    }
 
    return 0;
}
