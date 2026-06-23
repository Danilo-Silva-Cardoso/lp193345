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
            if(matriz[i][j]#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Sua lógica adaptada: retorna 1 se o tabuleiro tiver conflitos e 0 se estiver OK
int possui_erro_sudoku(int matriz[9][9]) {
    // 1. Validação de Linhas
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int valor = matriz[i][j];
            if (valor == 0) continue;
            for (int l = 0; l < 9; l++) {
                if (valor == matriz[i][l] && l != j) return 1;
            }
        }
    }

    // 2. Validação de Colunas
    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++) {
            int valor = matriz[i][j];
            if (valor == 0) continue;
            for (int l = 0; l < 9; l++) {
                if (valor == matriz[l][j] && l != i) return 1;
            }
        }
    }

    // 3. Validação dos Blocos 3x3
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

// Desenha o tabuleiro no console de forma legível
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

// Retorna 1 se o tabuleiro estiver completamente preenchido, ou 0 se houver zeros
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

    // Solicita o nome do arquivo ao usuário
    printf("Digite o nome do arquivo de entrada (ex: input2.txt): ");
    scanf("%99s", nome_arquivo);

    // Abre o arquivo para leitura usando a biblioteca padrão do C
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo! Certifique-se de que o nome esta correto e o arquivo existe.\n");
        return 1;
    }

    // Lê a matriz do arquivo [cite: 1]
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (fscanf(arquivo, "%d", &matriz[i][j]) != 1) {
                printf("Erro ao ler os dados do arquivo. Formato invalido.\n");
                fclose(arquivo);
                return 1;
            }
        }
    }
    fclose(arquivo); // Fecha o arquivo após terminar a leitura

    printf("\n--- JOGO INICIADO ---\n");

    // Loop principal do jogo interativo
    while (1) {
        imprimir_tabuleiro(matriz);

        // Alerta o usuário caso alguma jogada tenha quebrado as regras do Sudoku
        if (possui_erro_sudoku(matriz)) {
            printf("\n[AVISO] O tabuleiro atual possui conflitos/erros!\n");
        }

        // Condição de Vitória: preenchido e sem erros
        if (tabuleiro_completo(matriz) && !possui_erro_sudoku(matriz)) {
            printf("\nPARABENS! Voce resolveu o Sudoku com sucesso!\n");
            break;
        }

        int linha, coluna, valor;
        printf("\nDigite a jogada (Linha Coluna Valor) ou '0 0 0' para sair: ");
        if (scanf("%d %d %d", &linha, &coluna, &valor) != 3) {
            printf("Entrada invalida. Digite tres numeros.\n");
            // Limpa o buffer caso o usuário digite texto por engano
            while (getchar() != '\n');
            continue;
        }

        // Condição para encerrar o programa
        if (linha == 0 && coluna == 0 && valor == 0) {
            printf("Jogo encerrado pelo usuario.\n");
            break;
        }

        // Validação dos limites das coordenadas informadas
        if (linha < 1 || linha > 9 || coluna < 1 || coluna > 9 || valor < 1 || valor > 9) {
            printf("Jogada invalida! Os valores de linha, coluna e valor devem ser de 1 a 9.\n");
            continue;
        }

        // Insere o valor na matriz (ajustando de 1..9 para o índice 0..8 da linguagem C)
        matriz[linha - 1][coluna - 1] = valor;
    }

    return 0;
}
