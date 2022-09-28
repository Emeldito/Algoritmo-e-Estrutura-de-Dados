/*Escreva um programa que leia um arquivo do tipo base de dados em .txt, retire e 
apresente informacoes importantes na tela. Voc� pode criar o arquivo no EDIT do 
DOS, ou no NOTEPAD do Windows, ou no PICO, no UNIX.*/
// Autor(a)    : Emeldito Covane
// Data actual  : 28/09/2022
#include <stdio.h>
#define NOME_TAM 26
#define ENDER_TAM 30
#define TELE_TAM 20

void main()
{
    FILE *arq;
    char nome[NOME_TAM+1], ender[ENDER_TAM+1], tele[TELE_TAM+1], arq_nome[30];
    char c;

    printf("\n\nArquivo de entrada: ");
    gets(arq_nome);
    if ((arq = fopen(arq_nome, "r")) == NULL)
    {
      printf("\nErro ao abrir o arquivo %s!",arq_nome);
      exit(1);
    }

    printf("\n\nImprimindo dados do arquivo: %s\n", arq_nome);
    while (!feof(arq))  /* Enquanto nao encontra o fim do arquivo */
    {
      c =0;
      /* Leitura sincronizada.. */
      fscanf(arq, "%s", nome);     /* Salta a palavra: 'Nome:' */
      fgets(nome, NOME_TAM, arq);
      fscanf(arq, "%s", tele);     /* Salta a palavra: 'Telefone:' */
      fgets(tele, TELE_TAM, arq);
      fscanf(arq, "\n%s", ender);  /* Salta a palavra: 'Endereco:' */
      fgets(ender, ENDER_TAM, arq);
      printf("\nNome: %s\nEndereco: %sTelefone: %s", nome, ender, tele);

      /* Caso alguma parte se perca, e o ponteiro no arquivo fique parado
         em alguma parte do registro, esta rotina fara a sincronizacao. */
      while(c != '$')
      {
        c = getc(arq);
        if (feof(arq)) break;
      }
    }
    fclose(arq);
}