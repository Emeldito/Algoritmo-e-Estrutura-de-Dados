#include<stdio.h>
// Disciplina   : [Introdução a algoritmo e programação]
// Descrição   : ler 5 valores inteiros, armazenar-os em um vetor, calcular e apresentar a soma destes valores.
// Autor(a)    : Emeldito Covane
// Data actual  : 28/09/2022
 
int main() 
{ 
 int valor[5], i, soma=0; 
 
 for(i=0; i<5; i++) 
 { 
 printf("Qual o %do valor?\n ", i+1); 
 scanf("%d", &valor[i]); 
 soma=soma+valor[i]; 
 } 
 
 printf("A soma vale: %d", soma); 
 
 getch(); 
} 