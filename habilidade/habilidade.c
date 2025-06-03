#include <stdlib.h>
#include "../campo/campo.h"

void hab_cone(Campo* campo, int eixoX, int eixoY) {
    for (int lin = 0; lin < 3; lin++) {
        for (int col = -lin; col <= lin; col++) {
            int x = eixoX + lin;
            int y = eixoY + col;
            if (x >= 0 && x < campo->linhas && y >= 0 && y < campo->colunas)
                campo->matriz[x][y] = 1;
        }
    }
}

void hab_cruz(Campo* campo, int eixoX, int eixoY) {
    for (int lin = 0; lin < campo->linhas; lin++)
        if (eixoY >= 0 && eixoY < campo->colunas)
            campo->matriz[lin][eixoY] = 1;

    for (int col = 0; col < campo->colunas; col++)
        if (eixoX >= 0 && eixoX < campo->linhas)
            campo->matriz[eixoX][col] = 1;
}

void hab_octa(Campo* campo, int eixoX, int eixoY) {
    for (int lin = -2; lin <= 2; lin++) {
        for (int col = -2; col <= 2; col++) {
            if (abs(lin) + abs(col) <= 2) {
                int x = eixoX + lin;
                int y = eixoY + col;
                if (x >= 0 && x < campo->linhas && y >= 0 && y < campo->colunas)
                    campo->matriz[x][y] = 1;
            }
        }
    }
}