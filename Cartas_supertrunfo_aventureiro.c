#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {

    setlocale(LC_ALL,"portuguese");

    int pturistico;
    float populacao, area, pib, dm, pibpc;
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

    dm = (populacao/area);

    pibpc = (pib/populacao);


    printf("Cidade: %c \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("Código da Carta: %s \n", codigo);
    printf("População: %.2f \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Nº de pontos turísticos: %d \n", pturistico);
    printf("Densidade demografica: %.2f\n", dm);
    printf("Pib Per Capita: %.2f\n", pibpc);

    system("pause");
    return 0;

}