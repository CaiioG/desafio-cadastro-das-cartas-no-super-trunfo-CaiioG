#include <stdio.h>
#include <string.h>

//Definindo a estrutura para a Carta
struct Carta {
    char Estado[20];
    char Codigo_da_carta[4];
    char Nome_do_cidade[20];
    int Populacao;
    float Area_em_km2;
    float Pib;
    int Numero_de_pontos_turisticos;
};

int main() {
    //Criando duas variáveis para as cartas
    struct Carta carta1;
    struct Carta carta2;
    
    //Atribuir os valores para a carta N°1
    strcpy(carta1.Estado, "Brasilia");
    strcpy(carta1.Codigo_da_carta, "B01");
    strcpy(carta1.Nome_do_cidade, "Distrito Federal");
    carta1.Populacao = 2980000;
    carta1.Area_em_km2 = 5802.0;
    carta1.Pib = 286900.0;
    carta1.Numero_de_pontos_turisticos = 4;

    //Atribuir os valores para a carta N°2
    strcpy(carta2.Estado, "Rio de Janeiro");
    strcpy(carta2.Codigo_da_carta, "B02");
    strcpy(carta2.Nome_do_cidade, "Saquarema");
    carta2.Populacao = 89600;
    carta2.Area_em_km2 = 352.0;
    carta2.Pib = 42000.0;
    carta2.Numero_de_pontos_turisticos = 4;

    // Saida dos valores carta N°1
    printf("Brasilia\n");
    printf("Estado: %s\n", carta1.Estado);
    printf("Codigo da Carta: %s\n", carta1.Codigo_da_carta);
    printf("Cidade: %s\n", carta1.Nome_do_cidade);
    printf("Populacao: %d\n", carta1.Populacao);
    printf("Area em km2: %.2f\n", carta1.Area_em_km2);
    printf("PIB: %.2f\n", carta1.Pib);
    printf("Pontos Turisticos: %d\n", carta1.Numero_de_pontos_turisticos);

    // Saida dos valores carta N°2
    printf("\nRio de Janeiro\n");
    printf("Estado: %s\n", carta2.Estado);
    printf("Codigo da Carta: %s\n", carta2.Codigo_da_carta);
    printf("Cidade: %s\n", carta2.Nome_do_cidade);
    printf("Populacao: %d\n", carta2.Populacao);
    printf("Area em km2: %.2f\n", carta2.Area_em_km2);
    printf("PIB: %.2f\n", carta2.Pib);
    printf("Pontos Turisticos: %d\n", carta2.Numero_de_pontos_turisticos);

    return 0;
}