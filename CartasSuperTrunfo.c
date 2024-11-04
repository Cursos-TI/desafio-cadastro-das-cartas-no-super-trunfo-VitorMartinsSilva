#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int npt;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da cidade:\n");
    scanf("%d",&codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s",nome);

    printf("Digite a população da cidade:\n");
    scanf("%d",&populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f",&area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f",&pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&npt);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n Código da Cidade: %d", codigo);
    printf("\n Nome da Cidade: %s", nome);
    printf("\n População da Cidade: %d", populacao);
    printf("\n Área da Cidade: %f", area);
    printf("\n PIB da Cidade: %f", pib);
    printf("\n Número de pontos Túristicos da Cidade: %d", npt);

    return 0;
}
