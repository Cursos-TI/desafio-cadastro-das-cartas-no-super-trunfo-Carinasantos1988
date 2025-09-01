#include <stdio.h>

int main() {

    // DESAFIO CARTAS SUPER TRUNFO NÍVEL MESTRE

    // Variáveis Carta 1
    char Estado1;
    char Codigo1[5];
    char Cidade1[50];
    unsigned long int Populacao1; // Tipo alterado para unsigned long int
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    float Densidade1;
    float PIBperCapita1;
    float SuperPoder1;

    // Variáveis Carta 2
    char Estado2;
    char Codigo2[5];
    char Cidade2[50];
    unsigned long int Populacao2; // Tipo alterado para unsigned long int
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float Densidade2;
    float PIBperCapita2;
    float SuperPoder2;

    // ENTRADA DE DADOS
    printf("BEM-VINDO AO CADASTRO DE CARTAS SUPER TRUNFO\n\n");

    // COLETA DE DADOS CARTA 1
    printf("###-----CADASTRO CARTA 1-----###\n\n");

    printf("Digite um Estado (uma letra de 'A' a 'H' que represente o Estado):\n");
    scanf(" %c", &Estado1);

    printf("Digite o Código da Carta (ex: A01):\n");
    scanf("%s", Codigo1);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", Cidade1);

    printf("Digite a População (use numeros inteiros grandes):\n");
    scanf("%lu", &Populacao1); // Use %lu para unsigned long int

    printf("Digite a Área (em km²):\n");
    scanf("%f", &Area1);
    
    printf("Digite o PIB (em bilhoes):\n");
    scanf("%f", &PIB1);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &PontosTuristicos1);

    // Cálculos Carta 1
    Densidade1 = (float)Populacao1 / Area1;
    PIBperCapita1 = (PIB1 * 1000000000) / (float)Populacao1;
    SuperPoder1 = (float)Populacao1 + Area1 + PIB1 + (float)PontosTuristicos1 + PIBperCapita1 + (1.0f / Densidade1);
    
    printf("\n***Carta 1 cadastrada com sucesso!!***\n\n");

    // COLETA DE DADOS CARTA 2
    printf("###-----CADASTRO CARTA 02-----###\n\n");

    printf("Digite um Estado (uma letra de 'A' a 'H' que represente o Estado):\n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta (ex: A01):\n");
    scanf("%s", Codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", Cidade2);

    printf("Digite a População (use numeros inteiros grandes):\n");
    scanf("%lu", &Populacao2); // Use %lu para unsigned long int

    printf("Digite a Área (em km²):\n");
    scanf("%f", &Area2);
    
    printf("Digite o PIB (em bilhoes):\n");
    scanf("%f", &PIB2);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &PontosTuristicos2);

    // Cálculos Carta 2
    Densidade2 = (float)Populacao2 / Area2;
    PIBperCapita2 = (PIB2 * 1000000000) / (float)Populacao2;
    SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + (float)PontosTuristicos2 + PIBperCapita2 + (1.0f / Densidade2);

    printf("\n***Carta 2 cadastrada com sucesso!!***\n\n");

    printf("========================================\n");
    printf("          CARTAS CADASTRADAS:\n");
    printf("========================================\n\n");

    // EXIBINDO INFORMAÇÕES CARTA 1
    printf("CARTA 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("Populacao: %lu\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n");

    // EXIBINDO INFORMAÇÕES CARTA 2
    printf("CARTA 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("\n");
    // ---- Comparações ----
    printf("========================================\n");
    printf("          RESULTADO DA BATALHA:\n");
    printf("========================================\n\n");

    // Variáveis auxiliares para tornar a saída mais clara
    int vencedorPop = (Populacao1 > Populacao2) ? 1 : 2;
    int resultadoPop = (Populacao1 > Populacao2) ? 1 : 0;

    int vencedorArea = (Area1 > Area2) ? 1 : 2;
    int resultadoArea = (Area1 > Area2) ? 1 : 0;

    int vencedorPIB = (PIB1 > PIB2) ? 1 : 2;
    int resultadoPIB = (PIB1 > PIB2) ? 1 : 0;

    int vencedorPontos = (PontosTuristicos1 > PontosTuristicos2) ? 1 : 2;
    int resultadoPontos = (PontosTuristicos1 > PontosTuristicos2) ? 1 : 0;

    int vencedorDensidade = (Densidade1 < Densidade2) ? 1 : 2; // menor densidade vence
    int resultadoDensidade = (Densidade1 < Densidade2) ? 1 : 0;

    int vencedorPIBpc = (PIBperCapita1 > PIBperCapita2) ? 1 : 2;
    int resultadoPIBpc = (PIBperCapita1 > PIBperCapita2) ? 1 : 0;

    int vencedorSuper = (SuperPoder1 > SuperPoder2) ? 1 : 2;
    int resultadoSuper = (SuperPoder1 > SuperPoder2) ? 1 : 0;

    // Imprimindo resultados
    printf("População: Carta %d venceu (%d)\n", vencedorPop, resultadoPop);
    printf("Área: Carta %d venceu (%d)\n", vencedorArea, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n", vencedorPIB, resultadoPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vencedorPontos, resultadoPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vencedorDensidade, resultadoDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vencedorPIBpc, resultadoPIBpc);
    printf("Super Poder: Carta %d venceu (%d)\n", vencedorSuper, resultadoSuper);

    return 0;
}
