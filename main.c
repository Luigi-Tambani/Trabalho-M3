#include <stdio.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void calcularTransposta(int matriz[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas) {
    int matrizTransposta[MAX_COLUNAS][MAX_LINHAS];

    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    printf("\nDigite os elementos da matriz, seguindo a seguinte ordem:\n\n");
    printf("Suponhamos que seja uma matriz de tamanho 2X2\n");
    printf("- Primeiro número digitado = [a11]\n");
    printf("- Segundo número digitado = [a12]\n");
    printf("- Terceiro número digitado = [a21]\n");
    printf("- Quarto número digitado = [a22]\n\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    calcularTransposta(matriz, linhas, colunas);

    return 0;
}


