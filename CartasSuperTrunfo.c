#include <stdio.h>

int main() {
    //Define as váriaveis da carta 1
    char codigodacarta1[5];
    char estado1[10];
    char nomedacidade1[20];
    float populacao1;
    float area1;
    float pib1;
    int pontoturistico1;

    //Define as váriaveis da carta 2
    char codigodacarta2[5];
    char estado2[10];
    char nomedacidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;

    //Cadastro da primeira carta

    printf ("Vamos cadastrar a primeira carta: \n");
    printf ("\n Qual o codigo da carta: \n");
    scanf ("%s", codigodacarta1);

    printf ("Qual o estado: \n");
    scanf ("%s", estado1);

    printf ("Qual o nome da cidade: \n");
    scanf ("%s", nomedacidade1);

    printf ("Qual a população: \n");
    scanf ("%i", &populacao1);

    printf ("Qual a área em Km: \n");
    scanf ("%f", &area1);

    printf ("Qual o PIB: \n");
    scanf ("%f", &pib1);

    printf ("Qual o numero de ponto turistico: \n");
    scanf ("%i", &pontoturistico1);

    //Cadastro da segunda carta:
    
    printf ("\n Vamos cadastrar a segunda carta:\n");
    printf ("\n Qual o código da carta: \n");
    scanf ("%s", codigodacarta2);

    printf ("Qual o estado: \n");
    scanf ("%s", estado2);

    printf ("Qual o nome da cidade: \n");
    scanf ("%s", nomedacidade2);

    printf ("Qual a população: \n");
    scanf ("%i", &populacao2);

    printf ("Qual a área em Km: \n");
    scanf ("%f", &area2);

    printf ("Qual o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Qual o ponto turistico: \n");
    scanf ("%i", &pontoturistico2);

    //Exibição das informações das cartas

    //Carta 1:

    printf ("Código da carta 1: %s \n", codigodacarta1);
    printf ("Estado: %s \n", estado1);
    printf ("Nome da cidade: %s \n", nomedacidade1);
    printf ("População: %i \n", populacao1);
    printf ("Area em Km: %f \n", area1);
    printf ("PIB: %f \n", pib1);
    printf ("Ponto turistico: %i \n", pontoturistico1);

    //Carta 2:

    printf ("Código da carta 2: %s \n", codigodacarta2);
    printf ("Estado: %s \n", estado2);
    printf ("Nome da cidade: %s \n", nomedacidade2);
    printf ("População: %i \n", populacao2);
    printf ("Area em Km: %f \n", area2);
    printf ("PIB: %f \n", pib2);
    printf ("Ponto turistico: %i \n", pontoturistico2);


    return 0;
}
