#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Carta 1

int main(){   
int populacao;
int pontot;
float area;
float pib;
char estado;
char codigo;
char cidade;

printf("Digite a populacao: \n");
scanf("A populacao: %d, &populacao");
printf("A populacao é: 2 %d\n");

printf("Digite o pontot: \n");
scanf("%d", &pontot);
printf("O pontot é: 20 %d\n", pontot);

printf("Digite a area: \n");
scanf("%f", &area);
printf(" A area é: 1 %f\n", area);

printf("Digite o pib: \n");
scanf("%f", &pib);
printf("O pib é: 3 %f\n", pib);

printf("Digite o estado: \n");
scanf("%d", &estado);
printf("O estado é: 'C' %d\n", estado);

printf("Digite o codigo: \n");
scanf("%s", &codigo);
printf("O codigo é: C01 C02 C03 C04  %s\n");

printf("Digite a cidade: \n");
scanf("%s", &cidade);
printf("A cidade: Fortaleza %s\n", cidade);

//*Printf define as variáveis das cartas como: população, ponto turístico, tamanho da área em km², pib, nome do estado, código e nome da cidade./*
//*Scanf declara população sendo 2.000.000; ponto turístico 20; tamanho 10.000.00km²; PIB 30.000.000; estado no nome de Ceará; código C01, C02, C03, C04; e cidade no nome de Fortaleza./*

}

//Carta 2

int main(){
    int população;
    int pontot;
    float area;
    float pib;
    char estado;
    char codigo;
    char cidade;

    printf("Digite a população \n");
    scanf("%d", &populacao);
    printf("A populacao é: 5 %d\n");

    printf("Digite o pontot \n");
    scanf("%d", &pontot);
    printf("O pontot é: 10 %d\n");

    printf("Digite a area \n");
    scanf("%f", &area);
    printf("A area é: 4 \n");

    printf("Digite o pib \n");
    scanf("%f", &pib);
    printf("O pib é: 37 %f\n");

    printf("Digite o estado \n");
    scanf("%f", &estado);
    printf("O estado é: 'R' \n");

    printf("Digite o codigo \n");
    scanf("%s", &codigo);
    printf("O codigo é: R01, R02, R03, R04");

    printf("Digite a cidade \n");
    scanf("%s", &cidade);
    printf("A cidade é Campos dos Goytacazes \n");

    //*Printf define as variáveis das cartas como: população, ponto turístico, tamanho da área em km², pib, nome do estado, código e nome da cidade./*
    //*Scanf declara a população sendo 400.000; ponto turístico 10; tamanho da área em 696km²; PIB de 37 bilhões;estado no nome de Rio de Janeiro; Codigo sendo R01, R02, R03, R04; Cidade de Campos dos Goytacazes./*


    return 0;
}
