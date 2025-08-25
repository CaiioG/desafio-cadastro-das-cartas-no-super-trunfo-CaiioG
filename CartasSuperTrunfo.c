#include <stdio.h>
#include <string.h>

// Definindo a estrutura para as cartas
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
// Criando duas variáveis para as cartas
struct Carta carta1;
struct Carta carta2;

// Atribuir os valores para a carta N°1
strcpy(carta1.Estado, "Distrito Federal");
strcpy(carta1.Codigo_da_carta, "B01");
strcpy(carta1.Nome_do_cidade, "Brasilia");
carta1.Populacao = 2980000;
carta1.Area_em_km2 = 5802.0;
carta1.Pib = 286900.0;
carta1.Numero_de_pontos_turisticos = 4;

// Atribuir os valores para a carta N°2
strcpy(carta2.Estado, "Rio de Janeiro");
strcpy(carta2.Codigo_da_carta, "B02");
strcpy(carta2.Nome_do_cidade, "Saquarema");
carta2.Populacao = 89600;
carta2.Area_em_km2 = 352.0;
carta2.Pib = 42000.0;
carta2.Numero_de_pontos_turisticos = 4;

// Exibir as cartas para o jogador
printf("--- Jogo Super Trunfo ---\n\n");
printf("Sua Carta (Carta 1):\n");
printf("Estado: %s\n", carta1.Estado);
printf("Codigo da Carta: %s\n", carta1.Codigo_da_carta);
printf("Cidade: %s\n", carta1.Nome_do_cidade);
printf("1. Populacao: %d\n", carta1.Populacao);printf("2. Area em km²: %.2f\n", carta1.Area_em_km2);
printf("3. PIB (milhoes de reais): %.2f\n", carta1.Pib);
printf("4. Pontos Turisticos: %d\n\n", carta1.Numero_de_pontos_turisticos);

int escolha;
printf("Escolha o numero do atributo para a batalha (1-4): ");
scanf("%d", &escolha);
printf("\nBatalhando contra a Carta 2!\n");
printf("Carta 2: %s\n\n", carta2.Nome_do_cidade);

switch (escolha) {
case 1:
printf("Atributo escolhido: Populacao\n");
printf("Sua carta (Brasilia): %d\n", carta1.Populacao);
printf("Carta 2 (Saquarema): %d\n", carta2.Populacao);
if (carta1.Populacao > carta2.Populacao) {
printf("\nVOCE VENCEU! Sua populacao e maior.\n");
} else if (carta1.Populacao < carta2.Populacao) {
printf("\nVOCE PERDEU! A populacao da outra carta e maior.\n");
} else {
printf("\nEMPATE! As populacoes sao iguais.\n");
}
break;

case 2:
printf("Atributo escolhido: Area em km²\n");
printf("Sua carta (Brasilia): %.2f\n", carta1.Area_em_km2);
printf("Carta 2 (Saquarema): %.2f\n", carta2.Area_em_km2);
if (carta1.Area_em_km2 > carta2.Area_em_km2) {
printf("\nVOCE VENCEU! Sua area e maior.\n");
} else if (carta1.Area_em_km2 < carta2.Area_em_km2) {
printf("\nVOCE PERDEU! A area da outra carta e maior.\n");
} else {
printf("\nEMPATE! As areas sao iguais.\n");
}
break;
case 3:
printf("Atributo escolhido: PIB\n");
printf("Sua carta (Brasilia): %.2f\n", carta1.Pib);
printf("Carta 2 (Saquarema): %.2f\n", carta2.Pib);
if (carta1.Pib > carta2.Pib) {
printf("\nVOCE VENCEU! Seu PIB e maior.\n");
 } else if (carta1.Pib < carta2.Pib) {
printf("\nVOCE PERDEU! O PIB da outra carta e maior.\n");
} else {
printf("\nEMPATE! Os PIBs sao iguais.\n");
}
break;
case 4:
printf("Atributo escolhido: Pontos Turisticos\n");
printf("Sua carta (Brasilia): %d\n", carta1.Numero_de_pontos_turisticos);
printf("Carta 2 (Saquarema): %d\n", carta2.Numero_de_pontos_turisticos);
if (carta1.Numero_de_pontos_turisticos > carta2.Numero_de_pontos_turisticos) {
printf("\nVOCE VENCEU! Seus pontos turisticos sao maiores.\n");
 } else if (carta1.Numero_de_pontos_turisticos < carta2.Numero_de_pontos_turisticos) {
printf("\nVOCE PERDEU! Os pontos turisticos da outra carta sao maiores.\n");
 } else {
printf("\nEMPATE! O numero de pontos turisticos e o mesmo.\n");
}
break;

default:
printf("Escolha invalida. O jogo foi encerrado.\n");
}

return 0;
}