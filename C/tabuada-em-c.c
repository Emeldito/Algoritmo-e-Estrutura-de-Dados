#include <stdio.h>
// Disciplina   : [Introdução a algoritmo e programação]
// Descrição   : Tabuada (Soma, subtração e multiplicação)
// Autor(a)    : Emeldito Covane
// Data actual  : 28/09/2022

int main ()
{
    int i=0, num=0;

    printf ("Digite um n£mero: ");
    scanf ("%d",&num);

    printf ("\n");

    while ( i <= 9 )
    {
        i++;
        printf ("%d + %d = %d\t", i, num, num+i);

        printf ("%d - %d = %d\t", i, num, i-num);

        printf ("%d X %d = %d\n", i, num, num*i);
    }

    return 0;
}