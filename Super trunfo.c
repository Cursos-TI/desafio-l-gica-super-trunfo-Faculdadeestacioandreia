#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char nome[20];
    int forca;
} Carta;

int main() {
    srand(time(NULL));

    // Cria algumas cartas
    Carta baralho[4] = {
        {"Dragão", 90},
        {"Cavaleiro", 70},
        {"Mago", 80},
        {"Orc", 60}
    };

    printf("=== SUPER TRUNFO SIMPLES ===\n");

    // Sorteia uma carta para cada jogador
    int i1 = rand() % 4;
    int i2 = rand() % 4;
    while (i2 == i1) i2 = rand() % 4; // garante cartas diferentes

    Carta jogador1 = baralho[i1];
    Carta jogador2 = baralho[i2];

    // Mostra cartas
    printf("Jogador 1 pegou: %s (Força %d)\n", jogador1.nome, jogador1.forca);
    printf("Jogador 2 pegou: %s (Força %d)\n", jogador2.nome, jogador2.forca);

    // Decide vencedor
    if (jogador1.forca > jogador2.forca)
        printf("Jogador 1 venceu!\n");
    else if (jogador2.forca > jogador1.forca)
        printf("Jogador 2 venceu!\n");
    else
        printf("Empate!\n");

    return 0;
}
