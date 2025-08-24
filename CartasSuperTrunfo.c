#include <stdio.h>

int main(){

    //DESAFIO CARTAS SUPER TRUNFO NÍVEL NOVATO

    //Variáveis Carta 1
    
    char Estado1;
    char Codigo1[5];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    float Densidade1;
    float PIBperCapita1;

    //Variáveis Carta 2

    char Estado2;
    char Codigo2[5];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float Densidade2;
    float PIBperCapita2;

    //ENTRADA DE DADOS

    printf("BEM-VINDO AO CADASTRO DE CARTAS SUPER TRUNFO\n\n");

    //COLETA DE DADOS DAS CARTAS
    printf("###-----CADASTRO CARTA 1-----###\n\n");

    printf("Digite um Estado (uma letra de 'A' a 'H' que represente o Estado):\n");
    scanf(" %c",&Estado1);

    printf("Digite o Código da Carta (ex: A01):\n");
    scanf("%s", Codigo1);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", Cidade1);

    printf("Digite a População:\n");
    scanf("%d", &Populacao1);

    printf("Digite a Área (em km²)\n");
    scanf("%f", &Area1);
    
    printf("Digite o PIB (em bilhões)\n");
    scanf("%f", &PIB1);

    printf("Digite o número de Pontos Turísticos\n");
    scanf("%d", &PontosTuristicos1);

    //Cálculos Carta 1
    Densidade1 = Populacao1 / Area1;
    PIBperCapita1 = (PIB2 * 1000000000) / Populacao1;
    
    printf("\n***Carta 1 cadastrada com sucesso!!***#\n\n");

    printf("###-----CADASTRO CARTA 02-----###\n\n");

    printf("Digite um Estado (uma letra de 'A' a 'H' que represente o Estado):\n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta (ex: A01):\n");
    scanf(" %s", Codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", Cidade2);

    printf("Digite a População:\n");
    scanf("%d", &Populacao2);

    printf("Digite a Área (em km²)\n");
    scanf("%f", &Area2);
    
    printf("Digite o PIB (em bilhões)\n");
    scanf("%f", &PIB2);

    printf("Digite o número de Pontos Turísticos\n");
    scanf("%d", &PontosTuristicos2);

    //Cálculos Carta 2
    Densidade2 = Populacao2 / Area2;
    PIBperCapita2 = (PIB2 * 1000000000) / Populacao2;

    printf("\n***Carta 2 cadastrada com sucesso!!***\n\n");

    printf("========================================\n");
    printf("          CARTAS CADASTRADAS:\n");
    printf("========================================\n\n");

    //EXIBINDO INFORMAÇÕES DAS CARTAS CADASTRADAS
    //CARTA 1:
    printf("CARTA 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

    printf("\n\n");
    printf("========================================\n");
    printf("                  :)\n");
    printf("========================================\n\n");

    //CARTA 2:
    printf("CARTA 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    return 0;
       
}
