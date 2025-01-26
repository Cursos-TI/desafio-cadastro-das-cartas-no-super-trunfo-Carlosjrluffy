#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    int main()
    {

    setlocale(LC_ALL,"portuguese");

    int pturistico;
    float populacao, area, pib;
    char estado;
    char cidade[10], codigo[4];
    
    printf("SUPER TRUNFO 'PAISES' \n");

    printf("\nEstado: \n");
    scanf("%c", &estado);
    
    printf("Código da Carta: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);  

    printf("População: \n");
    scanf("%f", &populacao);

    printf("Área em km²: \n");
    scanf("%f", &area);
    
    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de Pontos Turísticos: \n");
    scanf("%d", &pturistico);

    printf("Estado: %c \n", estado);
    printf("Código da Carta: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %.2f \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Nº de pontos turísticos: %d \n", pturistico);

    system("pause");
    return 0;

}
