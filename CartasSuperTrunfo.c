#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Define as váriaveis da carta 1
    char estado1[30];
    char codigodacarta1[30];
    char nomedacidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;

    //Define as váriaveis da carta 2
    char estado2[30];
    char codigodacarta2[30];
    char nomedacidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;

    //Cadastro da primeira carta

    printf ("Vamos cadastrar a primeira carta: \n");
    printf ("\n Qual o codigo da carta: \n");
    scanf ("%s", &codigodacarta1);

    printf ("Qual o estado: \n");
    scanf ("%s", &estado1);

    printf ("Qual o nome da cidade: \n");
    scanf ("%s", &nomedacidade1);

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
    scanf ("%s", &codigodacarta2);

    printf ("Qual o estado: \n");
    scanf ("%s", &estado2);

    printf ("Qual o nome da cidade: \n");
    scanf ("%s", &nomedacidade2);

    printf ("Qual a população: \n");
    scanf ("%i", &populacao2);

    printf ("Qual a área em Km: \n");
    scanf ("%f", &area2);

    printf ("Qual o PIB: \n");
    scanf ("%f", &pib2);

    printf ("Qual o ponto turistico: \n");
    scanf ("%i", &pontoturistico2);

    

    



    return 0;
}
