#include <stdio.h>

int main (){
    char estado[50];
    char carta[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite sua carta: \n");
    scanf("%s", &carta);

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite sua populacao: \n");
    scanf("%d", &populacao);

    printf("Digite sua área: \n");
    scanf("%f", &area);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Digite seu pontosturisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("\n--- DADOS DA CARTA ---\n");
    printf("estado: %s - carta: %s - cidade: %s - populacao: %d\n", estado, carta, cidade, populacao);
    printf("area: %.2f - PIB: %.2f - pntosturisticos: %d\n", area, PIB, pontosturisticos);







    return 0;
}
