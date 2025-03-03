#include <stdio.h>

#define MAX_NOME 50  // Definição do tamanho máximo para o nome da cidade

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;            // Estado (A-H)
    char codigo[4];         // Código da carta (ex: A01, B03)
    char nomeCidade[MAX_NOME]; // Nome da cidade
    int populacao;          // População
    float area;             // Área em km²
    float pib;              // PIB em bilhões de reais
    int pontosTuristicos;   // Número de pontos turísticos
} Carta;

int main() {
    // Declaração de duas cartas
    Carta carta1, carta2;

    // Entrada de dados da primeira carta
    printf("\nCadastro da Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta (Ex: A01, B03): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);  // Lê string com espaços

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (Ex: A01, B03): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
