#include <stdio.h>

int main() { 
    printf("DESAFIO SUPER TRUNFO\n");

    char ESTADO[3]; 
    char CODIGO[10];  
    char CIDADE[50];  
    int POPULACAO;
    float AREA;
    float PIB;
    int PontosTuristicos;

    printf("Escolha um ESTADO (sigla ex: SP, RJ, MG):\n");
    scanf("%2s", ESTADO);

    printf("Digite o CODIGO:\n");
    scanf("%9s", CODIGO);

    printf("Escolha uma CIDADE:\n");
    scanf("%49s", CIDADE); 

    printf("Digite a POPULACAO:\n");
    scanf("%d", &POPULACAO);

    printf("Digite a AREA (em km²):\n");
    scanf("%f", &AREA);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &PIB);

    printf("Número de PONTOS TURÍSTICOS:\n");
    scanf("%d", &PontosTuristicos);

  
    printf("\nDADOS INSERIDOS:\n");
    printf("Estado: %s\n", ESTADO);
    printf("Código: %s\n", CODIGO);
    printf("Cidade: %s\n", CIDADE);
    printf("População: %d\n", POPULACAO);
    printf("Área: %.2f km²\n", AREA);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);

    return 0;
}