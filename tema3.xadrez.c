#include <stdio.h>

//Variavel com a quantidade de casas a serem andadas
int torre = 4;
int bispo = 4;
int rainha = 7;

int main(){
    //Movimento Torre - FOR
    printf("Movimento Torre");
    for (int i = 0; i < torre; i++){
        printf("\nDireita");
    }
    printf("\nTorre andou 4 casas para direita");

    //Movimento bispo - WHILE
    printf("\n\nMovimento Bispo");
    while (bispo > 0)
    {
        printf("\nCima, Direita");
        bispo--;
    }
    printf("\nBispo andou 4 casas em diagonal");

    //Movimento Rainha - DO/WHILE
    printf("\n\nMovimento Rainha");
    do
    {
        printf("\nEsquerda");
        rainha--;
    } while (rainha > 0);
    printf("\nRainha andou 7 casas para esquerda");

    return 0;
}
