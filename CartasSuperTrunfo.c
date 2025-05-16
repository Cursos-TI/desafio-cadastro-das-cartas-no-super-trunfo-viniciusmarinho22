#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //declaração das variáveis carta 1:

    char estado1, codigo1[3], cidade1[50];
    int pop1, pontos_turisticos1;
    float area1, PIB1, dens_pop1, PIB_per_capita1 ;
 
    //declaração das variáveis carta 2:

    char estado2, codigo2[3], cidade2[50];
    int pop2, pontos_turisticos2;
    float area2, PIB2, dens_pop2, PIB_per_capita2 ;

    //Entrada de dados carta 1:

    printf("Preencha as informações da carta 1 \n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);
    printf("Digite o Código: ");
    scanf("%s", codigo1);
    printf("Digite a Cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &pop1);
    printf("Digite a Área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    dens_pop1 = pop1 / area1;
    PIB_per_capita1 = PIB1 * 1000000000 / pop1;

    //impressão carta 1:

    printf("\nCARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", pop1);
    printf("Área em km²: %.2f \n", area1);
    printf("PIB em bilhões de reais: %.2f \n", PIB1);
    printf("Números de pontos turísticos: %d \n", pontos_turisticos1);
    printf("Densidade populacional hab/km²: %.2f\n", dens_pop1);
    printf("PIB per Capita em reais: %.2f\n", PIB_per_capita1);

    //Entrada de dados carta 2:

    printf("\nPreencha as informações da carta 2 \n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
    printf("Digite o Código: ");
    scanf("%s", codigo2);
    printf("Digite a Cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &pop2);
    printf("Digite a Área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    dens_pop2 = pop2 / area2;
    PIB_per_capita2 = PIB2 * 1000000000 / pop2;

    //impressão carta 2:
    
    printf("\nCARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", pop2);
    printf("Área em km²: %.2f \n", area2);
    printf("PIB em bilhões de reai: %.2f \n", PIB2);
    printf("Números de pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional hab/km²: %.2f\n", dens_pop2);
    printf("PIB per Capita em reais: %.2f\n", PIB_per_capita2);

    return 0;
}
