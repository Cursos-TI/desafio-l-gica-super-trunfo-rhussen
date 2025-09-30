#include <stdio.h> // Biblioteca para usar o comando printf (para mostrar texto na tela)

int main() {

    // --- Parte 1: Definindo as Cartas ---
    // CRIAMOS CARTAS SEM PRECISAR DO USUÁRIO DIGITAR

    // Carta 1: Brasil
    char nomePais1[] = "Brasil";
    int populacao1 = 215; // Em milhões

    // Carta 2: Argentina
    char nomePais2[] = "Argentina";
    int populacao2 = 45;  // Em milhões

    // Mostra as cartas na tela para o jogador saber com o que está jogando
    printf("--- Super Trunfo: Batalha de Paises ---\n");
    printf("Carta 1: %s - Populacao: %d milhoes\n", nomePais1, populacao1);
    printf("Carta 2: %s - Populacao: %d milhoes\n", nomePais2, populacao2);
    printf("---------------------------------------\n\n");


    // --- Parte 2: A Comparação (A Lógica do Jogo) ---
    // Agora vamos usar if/else para ver qual população é maior.

    printf("Quem tem a maior populacao?\n");

    // SE a população do país 1 for MAIOR QUE a população do país 2...
    if (populacao1 > populacao2) {
        // ...então, execute o código que está aqui dentro.
        printf("Vencedor: %s!\n", nomePais1);
    }
    // SENÃO SE a população do país 2 for MAIOR QUE a do país 1...
    else if (populacao2 > populacao1) {
        // ...então, execute este outro código.
        printf("Vencedor: %s!\n", nomePais2);
    }
    // SENÃO (se nenhuma das condições acima for verdade, é porque são iguais)...
    else {
        // ...execute este código para o caso de empate.
        printf("Deu empate!\n");
    }

    printf("\nFim de jogo!\n");

    return 0; // Avisa o sistema que o programa terminou com sucesso
}