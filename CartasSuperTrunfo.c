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
    float superpoder1;

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
    float superpoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro dos dados da carta 1

    printf("Digite o código da cidade da primeira carta:\n");
    scanf("%s",&codigo1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s",&nome1);

    printf("Digite a população da cidade da primeira carta:\n");
    scanf("%ld",&populacao1);

    printf("Digite a área da cidade da primeira carta: \n");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turísticos da cidade da primeira carta: \n");
    scanf("%d",&npt1);

    // Cadastro dos dados da carta 2

    printf("Digite o código da cidade da segunda carta:\n");
    scanf("%s",&codigo2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s",&nome2);

    printf("Digite a população da cidade da segunda carta:\n");
    scanf("%ld",&populacao2);

    printf("Digite a área da cidade da segunda carta: \n");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos da cidade da segunda carta: \n");
    scanf("%d",&npt2);

    // Cálculo da Densidade, PIB per Capta e Super poder

    densidade1 = populacao1 / area1;
    ppc1  = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    ppc2  = pib2 / populacao2;

    superpoder1 = populacao1+area1+pib1+npt1+densidade1+ppc1;
    superpoder2 = populacao2+area2+pib2+npt2+densidade2+ppc2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Mostrar dados da Cidade 1

    printf("\n Código da Cidade da primeira carta: %s", codigo1);
    printf("\n Nome da Cidade da primeira carta: %s", nome1);
    printf("\n População da Cidade da primeira carta: %ld", populacao1);
    printf("\n Área em km² da Cidade da primeira carta: %.3f", area1);
    printf("\n PIB da Cidade da primeira carta: %.2f", pib1);
    printf("\n Número de pontos Túristicos da Cidade da primeira carta: %d", npt1);
    printf("\n Densidade populacional da primeira carta: %.2f", (float)densidade1);
    printf("\n PIB Per CAPTA da primeira carta: %.2f", (float)ppc1);
    printf("\n Super Poder da primeira carta: %.2f\n", (float)superpoder1);
    
    // Mostrar dados da Cidade 2

    printf("\n Código da Cidade da segunda carta: %s", codigo2);
    printf("\n Nome da Cidade da segunda carta: %s", nome2);
    printf("\n População da Cidade da segunda carta: %ld", populacao2);
    printf("\n Área em km² da Cidade da segunda carta: %.3f", area2);
    printf("\n PIB da Cidade da segunda carta: %.2f", pib2);
    printf("\n Número de pontos Túristicos da Cidade da segunda carta: %d", npt2);
    printf("\n Densidade populacional da segunda carta: %.2f", (float)densidade2);
    printf("\n PIB Per CAPTA da segunda carta: %.2f", (float)ppc2);
    printf("\n Super Poder da segunda carta: %.2f\n", (float)superpoder2);

    //Comparação dos valores das cartas

    printf( "\nSe o resultado for 1, a carta 1 venceu, caso contrário, a carta 2 venceu\nPopulação, %d\n", populacao1>populacao2);
    printf( "Se o resultado for 1, a carta 1 venceu, caso contrário, a carta 2 venceu\nÁrea, %d\n", area1>area2);
    printf( "Se o resultado for 1, a carta 1 venceu, caso contrário, a carta 2 venceu\nPIB, %d\n", pib1>pib2);
    printf( "Se o resultado for 1, a carta 1 venceu, caso contrário, a carta 2 venceu\nNúmero Pontos Turísticos, %d\n", npt1>npt2);
    printf( "Se o resultado for 1, a carta 1 venceu, caso contrário, a carta 2 venceu\nDensidade Populacional, %d\n", densidade1<densidade2);
    printf( "Se o resultado for 1, a carta 1 venceu, caso contrário, a carta 2 venceu\nPib Per Capta, %d\n", ppc1>ppc2);
    printf( "Se o resultado for 1, a carta 1 venceu, caso contrário, a carta 2 venceu\nSuperpoder, %d\n", superpoder1>superpoder2);
    
    return 0;
}

