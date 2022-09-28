#include<stdio.h>
#include<math.h>
#include<string.h>
// Disciplina   : [Introdução a algoritmo e programação]
// Descrição   : ler um mês e ano e exibir o número de dias do mês / ano digitados.
// Autor(a)    : Emeldito Covane
// Data actual  : 28/09/2022


int main()
{
int ano, anobissexto, mesfevereirobissexto;
char mes[15];

scanf("%s",mes);
scanf("%d",&ano);

if (ano % 4==0 ) {
anobissexto = 366;
mesfevereirobissexto = 29;
}

else {
anobissexto = 365;
mesfevereirobissexto = 28;
}

if (strcmp(mes,"JANEIRO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"FEVEREIRO") == 0){
printf("DIAS = %d\n",mesfevereirobissexto);
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"MARCO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"ABRIL") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"MAIO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"JUNHO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"JULHO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"AGOSTO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"SETEMBRO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"OUTUBRO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
else if (strcmp(mes,"NOVEMBRO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
else if (strcmp(mes,"DEZEMBRO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

return 0;	

}