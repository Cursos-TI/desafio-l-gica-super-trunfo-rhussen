#include <stdio.h> 

// SUMÁRIO //

// %d: Imprime um inteiro no formato decimal.
 // %i: Equivalente a %d.
 // %f: Imprime um número de ponto flutuante no formato padrão.
 // %e: Imprime um número de ponto flutuante na notação científica.
 // %c: Imprime um único caractere.
 //%s: Imprime uma cadeia (string) de caracteres.

 //*******************************************************************************//


int main() {
    // --- 1. DEFINIÇÃO DAS VARIÁVEIS ---
    // Vamos usar menos atributos para facilitar.

    // Variáveis da Carta 1
    char nomeCidade1[50];
    float pib1; // utilizar número inteiro para facilidar, resultado em Milhões.
    float kmquadrados1; // Número inteiro para simplificar

    // Variáveis da Carta 2
    char nomeCidade2[50];
    float pib2;
    float kmquadrados2;

    // Nova variavel "N


    // --- 2. CADASTRO DAS CARTAS ---
    printf("--- Cadastro da Carta 1 ---\n"); // Cadastro simples sem espaço
    printf("Nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade1);

    printf("Valor do PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Tamanho em Quilometro Quadrado: ");
    scanf("%f", &kmquadrados1);
    printf("\n"); 


    printf("--- Cadastro da Carta 2 ---\n");
    printf("Nome da outra cidade (sem espacos): ");
    scanf("%s", nomeCidade2);

    printf("Valor do PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Tamanho em Quiliometros Quadrados: ");
    scanf("%f", &kmquadrados2);
    printf("\n");


    // --- 3. COMPARAÇÃO E RESULTADOS ---
    printf("        INICIO DA BATALHA         \n");

    // --- Comparando o PIB (Regra: MAIOR valor vence) ---
    printf("--- Batalha de PIB ---\n");
    // Se o pib1 for MAIOR que o pib2
    if (pib1 > pib2) {
        printf("Vencedor: %s, com PIB de %.f bilhoes!\n", nomeCidade1, pib1);
    }
    // Senão, se o pib2 for MAIOR que o pib1
    else if (pib2 > pib1) {
        printf("Vencedor: %s, com PIB de %.f bilhoes!\n", nomeCidade2, pib2);
    }
    // Senão, é porque são iguais
    else {
        printf("Deu EMPATE no PIB!\n");
    }
    printf("\n"); // Pula uma linha


    // --- Comparando a Quilometragem  (Maior valor vence) ---
    printf("--- Batalha de Tamanho em Quilometros Quadrados ---\n");
    // Se a kmquadrados1 for MENOR que a kmquadrados2
    if (kmquadrados1 > kmquadrados2) {
        printf("Vencedor: %s, pois Seu Tamanho %1.f km² é Maior!\n", nomeCidade1, kmquadrados1);
    }
    // Senão, se a densidade2 for MENOR que a densidade1
    else if (kmquadrados2 > kmquadrados1) {
        printf("Vencedor: %s, pois Seu Tamanho %1.f km² é Maior!\n", nomeCidade2, kmquadrados2);
    }
    // Senão, é porque são iguais
    else {
        printf("Deu EMPATE na Tamanho!\n");
    }
    printf("\n");


    printf("Fim de jogo!\n");

    return 0; // Indica que o programa terminou com sucesso
}