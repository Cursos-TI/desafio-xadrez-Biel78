#include <stdio.h>

// --- Funções Recursivas para Torre, Bispo e Rainha ---

// Movimento da Torre (Recursivo)
void moverTorre(int casas, char direcao) {
    if (casas <= 0) {
        return;
    }
    if (direcao == 'C') {
        printf("Cima\n");
    } else if (direcao == 'B') {
        printf("Baixo\n");
    } else if (direcao == 'E') {
        printf("Esquerda\n");
    } else if (direcao == 'D') {
        printf("Direita\n");
    }
    moverTorre(casas - 1, direcao); // Chamada recursiva
}

// Movimento do Bispo (Recursivo com Loops Aninhados)
// O loop externo para o movimento vertical e o interno para o horizontal
void moverBispoRecursivoAninhado(int casasVerticais, int casasHorizontais, char direcaoVertical, char direcaoHorizontal) {
    if (casasVerticais <= 0 && casasHorizontais <= 0) {
        return;
    }

    if (casasVerticais > 0) {
        if (direcaoVertical == 'C') {
            printf("Cima\n");
        } else if (direcaoVertical == 'B') {
            printf("Baixo\n");
        }
        moverBispoRecursivoAninhado(casasVerticais - 1, casasHorizontais, direcaoVertical, direcaoHorizontal);
    } else if (casasHorizontais > 0) {
        if (direcaoHorizontal == 'E') {
            printf("Esquerda\n");
        } else if (direcaoHorizontal == 'D') {
            printf("Direita\n");
        }
        moverBispoRecursivoAninhado(0, casasHorizontais - 1, direcaoVertical, direcaoHorizontal);
    }
}

// Movimento da Rainha (Recursivo - Combinação de Torre e Bispo)
void moverRainha(int casas, char direcaoPrincipal, char direcaoDiagonal) {
    if (casas <= 0) {
        return;
    }

    // Movimento como Torre
    if (direcaoPrincipal == 'C') {
        printf("Cima\n");
    } else if (direcaoPrincipal == 'B') {
        printf("Baixo\n");
    } else if (direcaoPrincipal == 'E') {
        printf("Esquerda\n");
    } else if (direcaoPrincipal == 'D') {
        printf("Direita\n");
    }
    // Movimento como Bispo (diagonal)
    else if (direcaoDiagonal == 'C' && direcaoPrincipal == 'D') { // Cima-Direita
        printf("Cima\n");
        printf("Direita\n");
    } else if (direcaoDiagonal == 'C' && direcaoPrincipal == 'E') { // Cima-Esquerda
        printf("Cima\n");
        printf("Esquerda\n");
    } else if (direcaoDiagonal == 'B' && direcaoPrincipal == 'D') { // Baixo-Direita
        printf("Baixo\n");
        printf("Direita\n");
    } else if (direcaoDiagonal == 'B' && direcaoPrincipal == 'E') { // Baixo-Esquerda
        printf("Baixo\n");
        printf("Esquerda\n");
    }

    moverRainha(casas - 1, direcaoPrincipal, direcaoDiagonal); // Chamada recursiva
}


// --- Loops Complexos para o Cavalo ---

// Movimento do Cavalo em "L" (duas casas para cima e uma para a direita)
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para cima, 1 para a direita):\n");
    int i, j;
    int movimentos = 0; // Para controlar as "pernas" do L

    // Loop externo para simular as "pernas" do movimento em L
    for (i = 0; i < 2; i++) { // Duas "pernas" verticais
        printf("Cima\n");
        movimentos++;
    }

    // Loop interno para a "perna" horizontal
    for (j = 0; j < 1; j++) { // Uma "perna" horizontal
        printf("Direita\n");
        movimentos++;
        // Exemplo de uso de 'break' (poderia ser usado em condições mais complexas)
        if (movimentos >= 3) { // Se já fez as 3 "pernas" do L
            break;
        }
    }
    printf("\n");
}

int main() {
    // Definição das casas a serem movidas e condições
    int casasTorre = 3;
    int casasBispoVert = 2;
    int casasBispoHoriz = 3;
    int casasRainha = 4;

    printf("--- Movimento da Torre ---\n");
    moverTorre(casasTorre, 'D'); // Move a torre 3 casas para a Direita
    printf("\n");

    printf("--- Movimento do Bispo ---\n");
    // Move o bispo 2 casas para cima e 3 para a direita (diagonal)
    moverBispoRecursivoAninhado(casasBispoVert, casasBispoHoriz, 'C', 'D');
    printf("\n");

    printf("--- Movimento da Rainha ---\n");
    // Move a rainha 4 casas para cima e para a direita (diagonal)
    moverRainha(casasRainha, 'D', 'C');
    printf("\n");

    printf("--- Movimento do Cavalo ---\n");
    moverCavalo();
    printf("\n");

    return 0;
}
