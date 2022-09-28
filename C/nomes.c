// Disciplina   : [Introdução a algoritmo e programação]
// Descrição   : ler nomes pelo teclado e os imprima na tela.
// Autor(a)    : Emeldito Covane
// Data actual  : 28/09/2022
#include <stdio.h>
void main()
{
    char nome[30];
    printf("\n\nEscreva um Nome: ");
    gets(nome);
    puts("\nO nome escrito foi:");
    puts(nome);
}