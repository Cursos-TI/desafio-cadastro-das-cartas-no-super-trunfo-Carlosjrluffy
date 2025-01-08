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
    
    int pturistico, codigo;
    float populacao, area, pib; 
    char cidade[25];



    printf("SUPER TRUNFO - PAÍSES\n");
    
    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("código da cidade: \n");
    scanf("%d", &codigo);
      
    printf("População: \n");
    scanf("%f", &populacao);
    
    printf("Área em m²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de pontos turísticos: \n");
    scanf("%d", &pturistico);

    printf("Cidade: %s \n", cidade);
    printf("Código: %d \n", codigo);
    printf("População: %f \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Nº de pontos turísticos: %d \n", pturistico);


    return 0;
}
