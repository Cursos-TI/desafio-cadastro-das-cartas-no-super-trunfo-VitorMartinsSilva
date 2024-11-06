#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Dados da Carta 1

    char estado1 [50];
    char codigo1[4];
    char nome1[50];
    long int populacao1;
    float area1;
    float pib1;
    int npt1;
    float densidade1;
    float ppc1;

    // Dados da carta 2

    char estado2 [50];
    char codigo2[4];
    char nome2[50];
    long int populacao2;
    float area2;
    float pib2;
    int npt2;
    float densidade2;
    float ppc2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro dos dados da carta 1

    printf("Digite o código da cidade:\n");
    scanf("%s",&codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s",&nome1);

    printf("Digite a população da cidade:\n");
    scanf("%ld",&populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&npt1);

    // Cadastro dos dados da carta 2

    printf("Digite o código da cidade:\n");
    scanf("%s",&codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s",&nome2);

    printf("Digite a população da cidade:\n");
    scanf("%ld",&populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&npt2);

    // Cálculo da Densidade e do PIB per Capta
    densidade1 = populacao1 / area1;
    ppc1  = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    ppc2  = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Mostrar dados da Cidade 1
    printf("\n Código da Cidade: %s", codigo1);
    printf("\n Nome da Cidade: %s", nome1);
    printf("\n População da Cidade: %ld", populacao1);
    printf("\n Área da Cidade: %.2f", area1);
    printf("\n PIB da Cidade: %.2f", pib1);
    printf("\n Número de pontos Túristicos da Cidade: %d", npt1);
    printf("\n Densidade populacional: %.2f", (float)densidade1);
    printf("\n PIB Per CAPTA: %.2f\n", (float)ppc1);

    // Mostrar dados da Cidade 2
    printf("\n Código da Cidade: %s", codigo2);
    printf("\n Nome da Cidade: %s", nome2);
    printf("\n População da Cidade: %ld", populacao2);
    printf("\n Área da Cidade: %.2f", area2);
    printf("\n PIB da Cidade: %.2f", pib2);
    printf("\n Número de pontos Túristicos da Cidade: %d", npt2);
    printf("\n Densidade populacional: %.2f", (float)densidade2);
    printf("\n PIB Per CAPTA: %.2f\n", (float)ppc2);
    
    return 0;
}
