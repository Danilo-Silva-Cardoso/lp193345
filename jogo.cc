/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Danilo Da Silva Cardoso
Linguagem   : C
Problema    : Jogo.cc
Data        : 23/06/2026
Objetivo    : jogo sudoku interativo para console;
Aprendizado : Fazer verificações para saber se o numero digitado é valido;
duvidas : Tive un pouco de dificuldade no fopen para que ele funcionasse corretamente;
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int possui_erro_sudoku(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int valor = matriz[i][j];
            if (valor == 0) continue;
            for (int l = 0; l < 9; l++) {
                if (valor == matriz[i][l] && l != j) return 1;
            }
        }
    }

    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++) {
            int valor = matriz[i][j];
            if (valor == 0) continue;
            for (int l = 0; l < 9; l++) {
                if (valor == matriz[l][j] && l != i) return 1;
            }
        }
    }

    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            int visitados[10] = {0};
            for (int l = 0; l < 3; l++) {
                for (int k = 0; k < 3; k++) {
                    int bloco = matriz[l + i][j + k];
                    if (bloco == 0) continue;
                    if (visitados[bloco] == 1) return 1;
                    visitados[bloco] = 1;
                }
            }
        }
    }
    return 0;
}

void imprimir_tabuleiro(int matriz[9][9]) {
    printf("\n    1 2 3   4 5 6   7 8 9\n");
    printf("  +-------+-------+-------+\n");
    for (int i = 0; i < 9; i++) {
        printf("%d | ", i + 1);
        for (int j = 0; j < 9; j++) {
            if (matriz[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", matriz[i][j]);
            }
            if ((j + 1) % 3 == 0) printf("| ");
        }
        printf("\n");
        if ((i + 1) % 3 == 0) {
            printf("  +-------+-------+-------+\n");
        }
    }
}

int tabuleiro_completo(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (matriz[i][j] == 0) return 0;
        }
    }
    return 1;
}

int main() {
    char nome_arquivo[100];
    int matriz[9][9];

    printf("Digite o nome do arquivo de entrada (ex: input2.txt): ");
    scanf("%99s", nome_arquivo);

    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo! Certifique-se de que o nome esta correto e o arquivo existe.\n");
        return 1;
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (fscanf(arquivo, "%d", &matriz[i][j]) != 1) {
                printf("Erro ao ler os dados do arquivo. Formato invalido.\n");
                fclose(arquivo);
                return 1;
            }
        }
    }
    fclose(arquivo);

    printf("\n--- JOGO INICIADO ---\n");

    while (1) {
        imprimir_tabuleiro(matriz);

        if (tabuleiro_completo(matriz) && !possui_erro_sudoku(matriz)) {
            printf("\nPARABENS! Voce resolveu o Sudoku com sucesso!\n");
            break;
        }

        int linha, coluna, valor;
        printf("\nDigite a jogada (Linha Coluna Valor) ou '0 0 0' para sair: ");
        if (scanf("%d %d %d", &linha, &coluna, &valor) != 3) {
            printf("Entrada invalida. Digite tres numeros.\n");
            while (getchar() != '\n');
            continue;
        }

        if (linha == 0 && coluna == 0 && valor == 0) {
            printf("Jogo encerrado pelo usuario.\n");
            break;
        }

        if (linha < 1 || linha > 9 || coluna < 1 || coluna > 9 || valor < 1 || valor > 9) {
            printf("[ERRO] Jogada invalida! Os valores de linha, coluna e valor devem ser de 1 a 9.\n");
            continue;
        }

        if (matriz[linha - 1][coluna - 1] != 0) {
            printf("[ERRO] A posicao (Linha %d, Coluna %d) ja esta preenchida!\n", linha, coluna);
            continue;
        }

        int aux = matriz[linha - 1][coluna - 1]; 
        
        matriz[linha - 1][coluna - 1] = valor;

        if (possui_erro_sudoku(matriz)) {
            printf("\n[AVISO] Jogada incorreta! O numero %d gera conflito nessa posicao.\n", valor);
            matriz[linha - 1][coluna - 1] = aux; 
        } else {
            printf("\nJogada aceita!\n");
        }
    }

    return 0;
}
