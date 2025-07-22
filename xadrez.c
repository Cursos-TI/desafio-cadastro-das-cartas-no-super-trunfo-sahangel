#include <stdio.h>

int main () { 

    // Carta 1 

    char estado;
    char codigo[4];
    char cidade[60];
    int população;
    float área;
    float pib;
    int pontoTuristicos;

    // Carta 2

    char estado1;
    char codigo1 [4];
    char cidade1[60];
    int população1;
    float área1;
    float pib1;
    int pontoTuristicos1;


    printf ("Faça o cadastro das cartas 1 \n");
    printf ("carta 1: \n\n");

    printf("Digite o estado: ");
    scanf (" %c", &estado);

    printf ("Digite o código da carta: ");
    scanf ("%s", codigo);

    printf ("Digite a cidade: ");
    scanf ("%s", cidade);

    printf ("Digite a população: ");
    scanf ("%d" , &população);

    printf ("Digite a área: ");
    scanf ("%f", &área);

    printf ("Digite o PIB: ");
    scanf ("%f", &pib);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &pontoTuristicos);

    // Carta 2:

    printf ("\nFaça o cadastro da carta 2\n");
    printf ("carta 2: \n\n");


    printf("Digite o estado: ");
    scanf (" %c", &estado1);

    printf ("Digite o código da carta: ");
    scanf ("%s", codigo1);

    printf ("Digite a cidade: ");
    scanf ("%s", cidade1);

    printf ("Digite a população: ");
    scanf ("%d" , &população1);

    printf ("Digite a área: ");
    scanf ("%f", &área1);

    printf ("Digite o PIB: ");
    scanf ("%f", &pib1);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &pontoTuristicos1);


    printf ("\nCarta 1: \n");
    printf ("Estado: %c\n", estado);
    printf ("Código da carta: %s\n", codigo);
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %d\n", população);
    printf ("Área: %f\n", área);
    printf ("PIB: %f\n", pib);
    printf ("Número de pontos turísticos: %d\n", pontoTuristicos);

    printf ("\nCarta 2: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código da carta: %s\n", codigo1);
    printf ("Nome da cidade: %s\n", cidade1);
    printf ("População: %d\n", população1);
    printf ("Área: %f\n", área1);
    printf ("PIB: %f\n", pib1);
    printf ("Número de pontos turísticos: %d\n", pontoTuristicos1);

    return 0;










     }
