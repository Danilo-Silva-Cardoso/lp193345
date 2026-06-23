/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
Data        : 30/03/2026
Objetivo    : jogo sudoku interativo para console
Aprendizado : Fazer verificações para saber se o numero digitado é valido
duvidas : faltou uma explicação melhor sobre o jogo não entendi muito bem o que de fato tinha que ser feito;
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int sudoku_valido(int matriz[9][9]) {
    int i, j, l, k;
    for(i = 0; i < 9; i++) {
        for(j = 0; j < 9; j++) {
            int valor = matriz[i][j];
            if(valor == 0) continue;
            for(l = 0; l < 9; l++) {
                if(valor == matriz[i][l] && l != j) {
                    return 0;
                }
            }
        }
    }

    for(j = 0; j < 9; j++) {
        for(i = 0; i < 9; i++) {
            int valor = matriz[i][j];
            if(valor == 0) continue;
            for(l = 0; l < 9; l++) {
                if(valor == matriz[l][j] && l != i) {
                    return 0;
                }
            }
        }
    }

    for(i = 0; i < 9; i += 3) {
        for(j = 0; j < 9; j += 3) {
            int visitados[10] = {0};
            for(l = 0; l < 3; l++) {
                for(k = 0; k < 3; k++) {
                    int bloco = matriz[l + i][j + k];
                    if(bloco == 0) continue;
                    if(visitados[bloco] == 1) {
                        return 0;
                    }
                    visitados[bloco] = 1;
                }
            }
        }
    }
    return 1;
}

void imprimir_tabuleiro(int matriz[9][9]) {
    printf("\n    1 2 3   4 5 6   7 8 9\n");
    printf("  -------------------------\n");
    for(int i = 0; i < 9; i++) {
        if(i % 3 == 0 && i != 0) {
            printf("  -------------------------\n");
        }
        printf("%d | ", i + 1);
        for(int j = 0; j < 9; j++) {
            if(j % 3 == 0 && j != 0) printf("| ");
            if(matriz[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("|\n");
    }
    printf("  -------------------------\n");
}

int jogo_concluido(int matriz[9][9]) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(matriz[i][j] == 0) return 0;
        }
    }
    return sudoku_valido(matriz);
}

int main() {
    int matriz[9][9];
    int fixos[9][9] = {0};
    const char* entrada_inicial = "534678912672195348198342567859761423426853791713924856961537284287419635345286170";
    
    for (int count = 0; count < 81; count++) {
        int num = entrada_inicial[count] - '0';
        matriz[count / 9][count % 9] = num;
        if(num != 0) {
            fixos[count / 9][count % 9] = 1;
        }
    }
    
    int linha, coluna, valor;
    
    while(1) {
        imprimir_tabuleiro(matriz);
        
        if(!sudoku_valido(matriz)) {
            printf("\n[ALERTA] Ha conflitos no tabuleiro atual!\n");
        }
        
        if(jogo_concluido(matriz)) {
            printf("\nPARABENS! Voce resolveu o Sudoku!\n");
            break;
        }
        
        printf("\nInsira a jogada (Linha Coluna Valor) ou '0 0 0' para sair.\n");
        printf("Exemplo: Para colocar '5' na linha 1 e coluna 2, digite: 1 2 5\n");
        printf("Sua jogada: ");
        
        if (scanf("%d %d %d", &linha, &coluna, &valor) != 3) {
            printf("Entrada invalida. Tente novamente.\n");
            while(getchar() != '\n'); 
            continue;
        }
        
        if(linha == 0 && coluna == 0 && valor == 0) {
            printf("Saindo do jogo... Ate a proxima!\n");
            break;
        }
        
        // Corrigido 'gateway' para 'coluna'
        if(linha < 1 || linha > 9 || coluna < 1 || coluna > 9 || valor < 0 || valor > 9) {
            printf("\n[ERRO] Valores fora do limite! Linhas/Colunas: 1-9. Valores: 0-9 (0 para apagar).\n");
            while(getchar() != '\n'); // Limpa buffer para evitar loop infinito com letras
            continue;
        }
        
        if(fixos[linha - 1][coluna - 1]) {
            printf("\n[ERRO] Voce nao pode alterar os numeros originais do tabuleiro!\n");
            continue;
        }
        
        int valor_antigo = matriz[linha - 1][coluna - 1];
        matriz[linha - 1][coluna - 1] = valor;
        
        if (valor != 0 && !sudoku_valido(matriz)) {
            printf("\n[ERRO] Esta jogada cria um conflito na linha, coluna ou bloco!\n");
            matriz[linha - 1][coluna - 1] = valor_antigo;
            continue;
        }
    }
    
    return 0;
}
