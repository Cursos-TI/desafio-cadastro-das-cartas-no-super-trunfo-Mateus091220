// #include <stdio.h>
//Estado: A Tipo: char
//Código: A01 Tipo: char
//Nome da Cidade: São Paulo Tipo: char
//População: 12325000  int
//Área: 1521.11 km² float
//PIB: 699.28 bilhões de reais float 
//Número de Pontos Turísticos: 50  int
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[3], codigo_cidade1[10], nome1[50];
    int populacao1, numero_pontos_turisticos1;
    float area1, PIB1;

    char estado2[3], codigo_cidade2[10], nome2[50];
    int populacao2, numero_pontos_turisticos2;
    float area2, PIB2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    printf("Digite a letra do Estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta 1");
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade da Carta 1: ");
    scanf(" %49[^\n]", nome1);

    printf("Digite a População da Cidade da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade da Carta 1 ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos da Cidade da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da Carta 2
    printf("\nDigite a letra do Estado  da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta 2  ");
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade da Carta 2: ");
    scanf(" %49[^\n]", nome2);

    printf("Digite a População da Cidade da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade da Carta 2 ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos da Cidade da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("Carta 2");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
