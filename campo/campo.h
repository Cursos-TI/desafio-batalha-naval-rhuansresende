#ifndef CAMPO_H
#define CAMPO_H

typedef struct {
    int linhas;
    int colunas;
    int** matriz;
} Campo;

Campo* criarCampo(int linhas, int colunas);
void exibir(Campo* c);
void limpar(Campo* c);
void liberar(Campo* c);

#endif