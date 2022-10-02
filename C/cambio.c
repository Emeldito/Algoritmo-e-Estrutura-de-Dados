#include <stdio.h>
#include <stdlib.h>
// Disciplina   : [Introdução a algoritmo e programação]
// Descrição   :  Conversão cambial de Metical para Dólar ou de Dólar para Metical
// Autor(a)    : Emeldito Covane
// Data actual  : 02/10/2022

 
//Utilize como taxa de câmbio $1 equivale a 64 Metical moçambicano


int main() {
    float valor, valorConvertido;
    int opcao;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\n1 - Converter de metical moçambicano para dólar\n2 - Converter de dólar para metical moçambicano\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:// Converter de metical para dólar ambicano 
        valorConvertido = valor / 64;
        printf("Valor convertido: $%.2f\n", valorConvertido);
        break;
    case 2:// Converter de dólar americano para metical moçambicano
        valorConvertido = valor * 64;
        printf("Valor convertido: MZN%.2f\n", valorConvertido);
        break;
    default:
        printf("\nOpcao invalida!!!\n");
    }
}