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

    /*
    Serão usados os dados para cartas fornecidos no texto do desafio:
    
    Carta 1:

        Estado: A
        Código: A01
        Nome da Cidade: SãoPaulo
        População: 12325000
        Área: 1521.11 km²
        PIB: 699.28 bilhões de reais
        Número de Pontos Turísticos: 50

    Carta 2:

        Estado: B
        Código: B02
        Nome da Cidade: RioDeJaneiro
        População: 6748000
        Área: 1200.25 km²
        PIB: 300.50 bilhões de reais
        Número de Pontos Turísticos: 30    
    */


    //declaração das variáveis carta 1:

    char estado1, codigo1[3], cidade1[50];
    int pontos_turisticos1;
    unsigned long int pop1;
    float area1, PIB1, dens_pop1, PIB_per_capita1 ;
    long double super_poder1;
 
    //declaração das variáveis carta 2:

    char estado2, codigo2[3], cidade2[50];
    unsigned long int pop2;
    int pontos_turisticos2;
    float area2, PIB2, dens_pop2, PIB_per_capita2 ;
    long double super_poder2;

    //declarações variaveis comparações:

    int resultado_pop, resultado_pontos_turisticos, resultado_area, resultado_PIB, resultado_dens_pop;
    int resultado_PIB_per_capita, resultado_super_poder;

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
    super_poder1 = pop1+area1+PIB1+pontos_turisticos1+PIB_per_capita1+(1/dens_pop1);

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
    super_poder2 = pop2+area2+PIB2+pontos_turisticos2+PIB_per_capita2+(1/dens_pop2);
    
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
    printf("Super poder: %.2Lf\n", super_poder1);

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
    printf("Super poder: %.2Lf\n", super_poder2);

    //Comparações entre as cartas
    //Obs: se resultado = 1 carta 1 venceu, se reusltado = 0 carta 2 venceu

    resultado_pop = pop1 > pop2; 
    resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2; 
    resultado_area = area1 > area2;
    resultado_PIB = PIB1 > PIB2;
    resultado_dens_pop = dens_pop1 < dens_pop2;
    resultado_PIB_per_capita = PIB_per_capita1 > PIB_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;

    printf("\n***Comparação das Cartas***\n");
    printf("População: Carta 1 venceu (%d)\n", resultado_pop);
    printf("Area: Carta 1 venceu (%d)\n", resultado_area);
    printf("PIB: Carta 1 venceu (%d)\n", resultado_PIB);
    printf("Ponto Turisticos: Carta 1 venceu (%d)\n", resultado_pontos_turisticos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultado_dens_pop);
    printf("PIB Per Capita: Carta 1 venceu (%d)\n", resultado_PIB_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado_super_poder);


    return 0;
}
