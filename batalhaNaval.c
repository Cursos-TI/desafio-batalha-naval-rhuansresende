#include <stdio.h>
#include "campo/campo.h"
#include "habilidade/habilidade.h"

int main() {
    int linhas, colunas;
    printf("Digite a quantidade de linhas do tabuleiro: ");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas do tabuleiro: ");
    scanf("%d", &colunas);

    Campo* campo = criarCampo(linhas, colunas);
    int eixoX = linhas / 2;
    int eixoY = colunas / 2;

    printf("\n=== Habilidade: Cone ===\n");
    hab_cone(campo, 0, eixoX);
    exibir(campo);
    limpar(campo);

    printf("=== Habilidade: Cruz ===\n");
    hab_cruz(campo, eixoX, eixoY);
    exibir(campo);
    limpar(campo);

    printf("=== Habilidade: Octaedro ===\n");
    hab_octa(campo, eixoX, eixoY);
    exibir(campo);

    liberar(campo);
    return 0;
}
