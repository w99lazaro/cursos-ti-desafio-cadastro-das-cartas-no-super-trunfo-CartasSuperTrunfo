#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() { 

    
 
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char pais;
    int codigo;    
    char estado;
    int populacao;
    float area;
    float pib;    
    int pontosTuristicos;  // Alterado para int, caso seja o número de pontos turísticos

 printf("digite o país:\n");
 scanf("%s",&pais);   

printf("Digite o código:\n ");
scanf("%d", &codigo);
    
printf("Digite o nome da cidade:\n ");   
scanf("%s",&estado);  // Não precisa do '&' aqui, já que 'nome' é um ponteiro
    
printf("Digite a população:\n ");
scanf("%d",&populacao);

printf("Digite a área:\n ");    
scanf("%d",&area);
    
printf("Digite o PIB:\n ");  
scanf("%d",&pib);
   
printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos);
    
  
return 0;
}
