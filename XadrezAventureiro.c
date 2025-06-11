#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Simulação do movimento da TORRE (usando 'for') ---
    printf("--- Movimento da Torre (5 casas para a Direita) ---\n");
    for (int i = 0; i < 5; i++) { // Loop 'for' para simular 5 movimentos
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n"); // Pula uma linha para separar os movimentos das peças

    // --- Simulação do movimento do BISPO (usando 'while') ---
    printf("--- Movimento do Bispo (5 casas na Diagonal para Cima e Direita) ---\n");
    int casasBispo = 0; // Variável para controlar o número de casas movidas pelo Bispo
    while (casasBispo < 5) { // Loop 'while' para simular 5 movimentos
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        casasBispo++; // Incrementa o contador de casas
    }
    printf("\n"); // Pula uma linha para separar os movimentos das peças

    // --- Simulação do movimento da RAINHA (usando 'do-while') ---
    printf("--- Movimento da Rainha (8 casas para a Esquerda) ---\n");
    int casasRainha = 0; // Variável para controlar o número de casas movidas pela Rainha
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        casasRainha++; // Incrementa o contador de casas
    } while (casasRainha < 8); // Loop 'do-while' para simular 8 movimentos
    printf("\n"); // Pula uma linha para separar os movimentos das peças

    // --- Simulação do movimento do CAVALO (usando loops aninhados: for e while) ---
    printf("--- Movimento do Cavalo (2 casas para Baixo e 1 casa para a Esquerda) ---\n");

    // Define as casas a serem movidas
    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    // Loop externo 'for' para o movimento vertical (Baixo)
    // Este loop simula as duas casas para baixo do movimento em "L"
    for (int i = 0; i < casasParaBaixo; i++) {
        printf("Baixo\n"); // Imprime o movimento para baixo
    }

    // Loop interno 'while' para o movimento horizontal (Esquerda)
    // Este loop simula a uma casa para a esquerda do movimento em "L"
    int j = 0; // Contador para o loop 'while'
    while (j < casasParaEsquerda) {
        printf("Esquerda\n"); // Imprime o movimento para a esquerda
        j++; // Incrementa o contador
    }
    printf("\n"); // Pula uma linha para separar os movimentos

    return 0; // Indica que o programa foi executado com sucesso
}
