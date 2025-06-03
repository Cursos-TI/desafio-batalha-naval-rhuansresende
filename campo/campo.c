#include <stdio.h>
#include <stdlib.h>
#include "../campo/campo.h"

Campo* criarCampo (int linhas, int colunas) {
    Campo* campo = (Campo*)malloc(sizeof(Campo));
    campo->linhas = linhas;
    campo->colunas = colunas;

    campo->matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        campo->matriz[i] = (int*)calloc(colunas, sizeof(int));
    }
    return campo;
}

void exibir(Campo* campo) {
    for(int lin = 0; lin < campo->linhas; lin++) {
        for(int col = 0; col < campo->colunas; col++) {
            printf("%d", campo->matriz[lin][col]);
        }
        printf("\n");
    }
    printf("\n");
}

void limpar(Campo* campo) {
    for (int lin = 0; lin < campo->linhas; lin++)
        for (int col = 0; col < campo->colunas; col++)
            campo->matriz[lin][col] = 0;
}

void liberar(Campo* campo) {
    for (int lin = 0; lin < campo->linhas; lin++) {
        free(campo->matriz[lin]);
    }
    free(campo->matriz);
    free(campo);
}