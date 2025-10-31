#include <stdio.h>

// --- Declaração das Funções (Protótipos) ---
void moverTorreRecursivo(int casas);
void moverBispoRecursivo(int casas);
void moverRainhaRecursivo(int casas);
void moverCavaloAlinhado();


int main() {
    
    int movimentos_torre, movimentos_bispo, movimentos_rainha;

    // --- TORRE (com Recursão) ---
    printf("--- Configuração da Torre (Recursivo) ---\n");
    printf("Digite o número de casas para a Torre se mover para a Direita: ");
    scanf("%d", &movimentos_torre);
    printf("\n--- Movimento da Torre ---\n");
    moverTorreRecursivo(movimentos_torre); // Chama a função recursiva
    printf("\n");

    // --- BISPO (com Recursão) ---
    printf("--- Configuração do Bispo (Recursivo) ---\n");
    printf("Digite o número de casas para o Bispo se mover na Diagonal: ");
    scanf("%d", &movimentos_bispo);
    printf("\n--- Movimento do Bispo ---\n");
    moverBispoRecursivo(movimentos_bispo); // Chama a função recursiva
    printf("\n");

    // --- RAINHA (com Recursão) ---
    printf("--- Configuração da Rainha (Recursivo) ---\n");
    printf("Digite o número de casas para a Rainha se mover para a Esquerda: ");
    scanf("%d", &movimentos_rainha);
    printf("\n--- Movimento da Rainha ---\n");
    moverRainhaRecursivo(movimentos_rainha); // Chama a função recursiva
    printf("\n");

    // --- CAVALO (com Loops Alinhados) ---
    printf("--- Movimento do Cavalo (Loops Alinhados) ---\n");
    moverCavaloAlinhado(); // Chama a função com loops
    printf("\n");


    printf("Simulação Concluída!\n");
    return 0;
}


// --- Definição das Funções Recursivas ---

/**
 * Move a Torre 'casas' vezes para a Direita usando recursão.
 */
void moverTorreRecursivo(int casas) {
   
    if (casas <= 0) {
        return;
    }
    
    printf("Direita\n");

    
    moverTorreRecursivo(casas - 1);
}


 // Move o Bispo 'casas' vezes na diagonal usando recursão.
 
void moverBispoRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima, Direita\n");

    moverBispoRecursivo(casas - 1);
}

 // Move a Rainha 'casas' vezes para a Esquerda usando recursão.

void moverRainhaRecursivo(int casas) {
    
    if (casas <= 0) {
        return;
    }   
    printf("Esquerda\n");

    moverRainhaRecursivo(casas - 1);
}


// --- Definição da Função com Loops Alinhados ---

  //Move o Cavalo uma vez em "L" (Cima, Cima, Direita)
  

void moverCavaloAlinhado() {
    int movimentoCompleto = 1;

    while(movimentoCompleto == 1) {
        
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        
        movimentoCompleto = 0; // Para o loop externo
    }
}