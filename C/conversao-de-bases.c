// Disciplina   : [Introdução a algoritmo e programação]
// Descrição   : Programa de conversao de bases numerica.
// Autor(a)    : Emeldito Covane
// Data actual  : 28/09/2022
/*   < Conversao de base > ------------------------------------------

  1: decimal para hexadecimal
  2: hexadecimal para decimal
  3: decimal para octal
  4: octal para decimal
  5: Encerra  ------------------------------------------     */
#include <stdio.h>
main()
{
int entrada, opcao = 0;
char opcao_c;

/* Loop principal do programa --------------------------------------*/
while (opcao != 5)
{
       printf("\n\n");

       /* Imprime a tela */
       printf("\n\n\t< Conversao de base >");
       printf("\n  1: decimal para hexadecimal");
       printf("\n  2: hexadecimal para decimal");
       printf("\n  3: decimal para octal");
       printf("\n  4: octal para decimal");
       printf("\n  5: Encerra");

       printf("\n\n\t\tOpcao: ");
       scanf("%d", &opcao);
       if ((opcao > 4)||(opcao <1))
          continue;           /* Opcao invalida ou saida */
                              /* Volta ao inicio do loop */

       printf("\nEntre com o numero: ");
       switch (opcao)
       {
          case 1:
                  scanf("%d", &entrada);
                  printf("Numero convertido: %x", entrada);
          break;
          case 2:
                  scanf("%x", &entrada);
                  printf("Numero convertido: %d", entrada);
          break;
          case 3:
                  scanf("%d", &entrada);
                  printf("Numero convertido: %o", entrada);
          break;
          case 4:
                  scanf("%o", &entrada);
                  printf("Numero convertido: %d", entrada);
          break;
       }
}
}