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

    // adicionado nova variavel: jogador irá escolher no menu.
    int escolha;


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

// alteração do código para escolher no console ~~ Nova alteração ~~ 

printf("--- Escolha a Batalha ---\n");
printf("Qual opção você quer usar para comparar?\n");
printf("1. PIB (maior valor vence)\n");
printf("2. Tamanho Em km² (Maior Valor Vence)\n");
printf("Digite sua escolha:  ");
scanf("%d", &escolha); // Iremos ler e guardar na variavel escolha??
printf("\n");


// -- COMPARAR USANDO SWITCH -- 
pintf("INICIO DA BATALHA\n");

// O switch vai olhar o valor da variável 'escolha' e executar.
    switch (escolha) {

        // Caso o jogador tenha escolhido '1'
        case 1:
            printf("--- Batalha de PIB ---\n");
            if (pib1 > pib2) {
                printf("Vencedor: %s, com PIB de %.f bilhoes!\n", nomeCidade1, pib1);
            }
            else if (pib2 > pib1) {
                printf("Vencedor: %s, com PIB de %.f bilhoes!\n", nomeCidade2, pib2);
            }
            else {
                printf("Deu EMPATE no PIB!\n");
            }
            break; // Termina a execução 

        // Caso o jogador tenha escolhido '2'
        case 2:
            printf("--- Batalha de Tamanho em Quilometros Quadrados ---\n");
            if (kmquadrados1 > kmquadrados2) {
                printf("Vencedor: %s, pois Seu Tamanho %.f km² e Maior!\n", nomeCidade1, kmquadrados1);
            }
            else if (kmquadrados2 > kmquadrados1) {
                printf("Vencedor: %s, pois Seu Tamanho %.f km² e Maior!\n", nomeCidade2, kmquadrados2);
            }
            else {
                printf("Deu EMPATE no Tamanho!\n");
            }
            break; // Termina a execução do switch

        // Caso o jogador digite um número que não é 1 nem 2
        default:
            printf("Opcao invalida! Escolha 1 ou 2.\n");
            break;
    }

    printf("\nFim de jogo!\n");

    return 0;

}