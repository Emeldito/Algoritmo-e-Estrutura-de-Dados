#include <stdio.h>
#include <stdlib.h>                                     
#include <string.h>                                              

typedef struct { //-------------------------------criando uma struct.
	int matricula;//------------------------------matr�cula do tipo inteiro.
	char nome[10];//------------------------------nome do tipo char.
	float nota1, nota2, nota3,media;//------------------notas e media do tipo float.
}aluno;//---------------------------------------struct do tipo aluno.
//----------------------------------------------abaixo est�os os prot�tipos das fun��es que estar�o logo abaixo do main.
int totalAluno();//-----------------------------prototipo da fun��o para ler arquivo e contar quantos alunos tem no arquivo a cada par�grafo.
aluno*alocaAlunos();//--------------------------prot�tipo da fun��o de aloca��o dinamica de alunos de acordo com a contagem feita pela fun��o anterior.
aluno *enderecoAluno();//-----------------------prot�tipo da fun��o para ler aluno de acordo com os dados da struct "aluno".
void ordena();//--------------------------------prot�tipo da fun��o para ordernar alunos pela matr�cula.
void busca();//---------------------------------prot�tipo da fun��o para buscar o aluno conforme o usuario digitar.
void buscaedita();//----------------------------prot�tipo da fun��o para buscar e posteriormente editas as notas caso o usu�rio desejar.
void criarquivo();//----------------------------prot�tipo da fun��o para cria��o do arquivo que ir� conter todos os dados alterados durante o programa.
void menu();//----------------------------------prot�tipo da fun��o menu.

int main()
{
	aluno *a;//------------------------------declarei que minha struct aluno se chamar� "*a" que est� din�micamente alocada com a quantidade de alunos contidas no arquivo.
	int total  = totalAlunos();//------------declarei int total com o valor da quantidade de linhas chamando a fun��o que continha o valor da quantidade de alunos.
	a=alocaAlunos(total);//----------------a recebe aloca��o dinamica. 
	a=enderecoAluno(total,a);//------------a recebe dados da struct aluno.
	menu (total, a);//-----------------------chamei a fun��o menu para intera��o com o usu�rio.
	free(a);//-------------------------------liberando a memoria da aloca��o.
	return 0;
}

int totalAlunos(){ //-------------------------------------------------fun��o para abrir o arquivo e percorrer caracter por caracter, e a cada par�grafo ('\n') ir� contar 1 linha 
    int aux=1;                                               
    char c;
    FILE *arquivo;//-------------------------------------------------------------------------------------------------declarei um ponteiro de arquivo que permitir� eu manipualr o arquivo.
    arquivo=fopen("alunos.txt","r");//-------------------------------------------------------------------------------aqui eu especifiquei que quero ler o arquivo que est� localizado no caminho relativo( dentro da pasta onde est� o programa). 
    if(arquivo == NULL){//-------------------------------------------------------------------------------------------Caso o arquivo retorne NULL.
        printf("Erro de abertura de arquivo !!!\n");//---------------------------------------------------------------ir� imprimir na tela que n�o deu certo ou seja, o ponteiro retornou NULL.
        exit(1);
    }

 	while((c = fgetc(arquivo)) != EOF){//----------------------------enquanto n�o chegar ao final do arquivo 
            if(c=='\n'){//-------------------------------------------cada '\n' ser� acrescentado um valor pelo contador aux++.
                aux++;//---------------------------------------------vari�vel contadora que ir� incrementar a cada par�grafo se for igual igual a '\n'.
            }
    }
    fclose(arquivo);
	return aux;//-------------------------------------------------------retornar� valor que declarei no int main (int total) que passa a ser o total de alunos.
}

aluno*alocaAlunos(int total){//------------------------------------------fun��o que aloca a quantidade de alunos lidos dinamicamente que ser� preciso para que seje usados nos comandos de repeti��es durante a execu��o do programa.
	aluno *a = ( aluno*) malloc ( total*sizeof ( aluno )); 
	if (a == NULL){//---------------------------------------------------caso n�o consiga alocar retornar� NULL.
        exit(1);//------------------------------------------------------A fun��o exit da biblioteca stdlib interrompe a execu��o do programa e fecha todos os arquivos que o programa tenha porventura aberto.
    }
    return a;//---------------------------------------------------------recebe a aloca��o dinamica.
}

aluno *enderecoAluno(int total,aluno*a){//--------------------------------------------------------------------------fun��o para abrir o arquivo pela segunda vez e passando os dados do arquivo para a struct do tipo aluno.
	int i;
	FILE *arquivo;//-------------------------------------------------------------------------------------------------declarei um ponteiro de arquivo que permitir� eu manipualr o arquivo.
    arquivo=fopen("alunos.txt","r");//-------------------------------------------------------------------------------aqui eu especifiquei que quero ler o arquivo que est� localizado no caminho relativo( dentro da pasta onde est� o programa). 
    for(i=0;i<total;i++){//------------------------------------------------------------------------------------------comando de repeti��o para percorrer total de alunos no arquivo.
    	fscanf(arquivo,"%d %s %f %f %f\n",&a[i].matricula, &a[i].nome, &a[i].nota1, &a[i].nota2, &a[i].nota3);//-----como consegui ler o arquivo agora preciso endere�ar os valores lidos dentro da struct criada no inicio do programa atraves do fcanf
    	a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3)/3;                                                //------sendo assim tamb�m informando arquivo no inicio dos paramentro do fscanf e "&" para endere��-la na struct aluno *a. 
	}
	fclose (arquivo);//------------------------------------------------------------------------------------------------fecha arquivo.
	return a; 
}

void ordena(int total,aluno*a){//-------------------------------------------fun��o para ordenar cada aluno pela matricula da estrutura aluno.
	int cont,i;
	aluno troca;//----------------------------------------------------------criei uma nova struct para fazer uma fun��o de auxiliar para que haja a troca da media da struct dentro do "if".
	for (cont=0 ; cont < total ; cont ++){//---------------------------------O algoritmo a seguir compila normalmente e at� retorna o resultado esperado (uma struct ordenada), 
		for(i=cont+1; i < total ; i++){										//mas ele percorre o vetor por completo mesmo quando ele j� foi ordenado ao la�o for mais interno.
			if(a[cont].matricula > a[i].matricula ){                        //ele vai trocando de lugar com maior valor de matr�cular pelo menor e at� o menor valor ser o primeiro e o �ltimo ser o maior valor de matr�cula.
				troca = a[i];
				a[i] = a[cont];
				a[cont] = troca;
			}
		}
	}
	for(i=0; i < total ; i++){ // -----------------------------------------esse comando de repeti��o � para imprimir os alunos ordenados pelo algoritmo anterior.
		printf("%-4d %-7s %.1f %.1f %.1f\n",a[i].matricula,a[i].nome,a[i].nota1,a[i].nota2, a[i].nota3);		
	}
}

void buscaedita(int total,aluno*a){//----------------------------------------------------------------------------fun��o para buscar aluno e edita-lo logo em seguida.
	int i,dados;//-----------------------------------------------------------------------------------------------vari�veis i e dados, i para percorrer os alunos dentro do for e dados para ser o valor que o usu�rio digitar
	printf("Digite a matricula do aluno desejado:");//-----------------------------------------------------------intera��o com o usus�rio, imprimindo na tela obrigando o usuario inserir a matr�cula do aluno.
	scanf("%d",&dados);//---------------------------------------------------------------------------------------vari�vel que ir� armazenar o aluno buscado.
	for(i=0 ; i<total ;i++){
		if(dados==a[i].matricula){ //------------------------------------------------------------------------------------caso o usu�rio digite o numero que seje == da matricula ele vai editar 
			printf("%d %s %.1f %.1f %.1f\n",a[i].matricula, a[i].nome, a[i].nota1, a[i].nota2, a[i].nota3);//------------o aluno depois de encontrado ele ir� aparecer com todos as suas notas e caso queira mudar aparecer� a op��o de mudar.
			printf("corrija a nota do aluno:\n");
			printf("Edite a primeira nota:");
			scanf("%f",&a[i].nota1);
			printf("Edite a segunda nota:");
			scanf("%f",&a[i].nota2);
			printf("Edite a terceira nota:");
			scanf("%f",&a[i].nota3);
			a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3)/3;//--------------------------------------------------------adicionei media novamente para que o dado modificado nas notas seje o valor final dos alunos editado.
			printf("%-4d %-7s notas atuais %.1f %.1f %.1f sua media atual e :%.1f\n",a[i].matricula, a[i].nome, a[i].nota1, a[i].nota2, a[i].nota3,a[i].media);//------depois de alterado aparecer� o valor das medias totais do aluno editado.
		}
	}
}
				
void buscaalunos(int total,aluno*a){//----------------------------------------------------------------------------fun��o para buscar alunos pela matr�cula.
	int i,dados;//-----------------------------------------------------------------------------------------------vari�veis i e dados, i para percorrer os alunos dentro do for e dados para ser o valor que o usu�rio digitar
	printf("Digite a matricula do aluno desejado:");//-----------------------------------------------------------intera��o com o usus�rio, imprimindo na tela obrigando o usuario inserir a matr�cula do aluno.
	scanf("%d",&dados);//---------------------------------------------------------------------------------------vari�vel que ir� armazenar o aluno buscado.
	for(i=0 ; i<total ;i++){//-----------------------------------------------------------------------------------comando de repeti��o para percorrer os dados do aluno "a".
		if(dados==a[i].matricula){//------------------------------------------------------------------------------------caso o usu�rio digite o numero que seje == da matricula que ele deseja buscar. 
			printf("%-4d %-7s %.1f %.1f %.1f\n",a[i].matricula, a[i].nome, a[i].nota1, a[i].nota2, a[i].nota3);//------------aparecer� os dados do aluno buscado.
		}
	}
}

void menu(int total,aluno*a){ // fun��o do menu para ler no main 
	int opcao,i,rep=1,apro=1,imaior,imenor,mat,imat;//--------------------------------------------------------------variaveis que usarei dentro do menu.
	float maior=0.0,menor;//-----------------------------------------------------------------------------------------variavel do tipo float para percorrer a media maior e menor dos alunos.
	do{//--------------------------------------------------------------------------------------comando de repeti��o para repetir o menu a cada intera��o como usu�rio.
		printf("=======================MENU=======================\n");
		printf("1-Imprimir todos os elementos do arranjo;\n");
		printf("2-Imprimir apenas os nomes dos alunos;\n");
		printf("3-Imprimir o nome dos alunos e sua respectiva nota final;\n");
		printf("4-Buscar os dados de um aluno usando a busca sequencial;\n");
		printf("5-Imprimir os alunos ordenados de acordo com sua matricula;\n");
		printf("6-Editar as notas de um aluno, para isso e necess�rio que se busque os dados do aluno\n");
		printf("7-Imprimir a matricula, nome e nota final do aluno que obteve a maior nota de todas;\n");
		printf("8-Imprimir a matricula, nome e nota final do aluno que obteve a menor nota de todas;\n");
		printf("9-Imprimir quantos alunos foram aprovados e quantos alunos foram reprovados, imprima ainda a media geral. Os alunos aprovados serao aqueles que obtiverem media maior ou igual a 6.0;\n");
		printf("10-Criar novo arquivo;\n");
		printf("0-Sair do programa;\n\n");
		printf("Escolha: ");
		scanf("%d",&opcao);
		switch (opcao){//------------------------------------------------------------------------------------------------------usei o switch pois seria menos if e else, alem de ser mais pr�tico, e o valor que essa vari�vel receber� do usu�rio definir� os "cases" do switch.
			case 1:
				printf("Imprimindo todos os dados dos alunos:\n\n");
				for(i=0;i<total;i++){//---------------------------------------------------------------------------------------comando de repeti��o para ler todos os dados da struct aluno
					printf("%-4d %-7s %.1f %.1f %.1f\n",a[i].matricula, a[i].nome, a[i].nota1, a[i].nota2, a[i].nota3);
				} 
				system("pause");//--------------------------------------------------------------------------------------------fun��o necess�rio no ambiente Windows para pausar a tela.
				system("cls");//----------------------------------------------------------------------------------------------fun��o para limpar a tela 
				break;
				case 2:
					printf("Imprimindo apenas nomes:\n\n");
					for(i=0;i<total;i++){
						printf( "%-7s\n",a[i].nome );//-----------------------------------------------------------------------printf para imprimir apenas os nomes que estavam na struct.
					}
					system("pause");
					system("cls");
					break;
					case 3:
						printf("Imprimindo os nomes e a media final:\n\n");//----------------como eu fiz a media na struct, ja fiz um for para imporimir apenas o nome e a media de todos os aluno.
						for(i=0;i<total;i++){//--------------------------------------------- comando de repeti��o para ler apenas medias e nomes da struct descritos no printf.
							printf( "%-7s - Nota final: %.1f\n",a[i].nome, a[i].media );
						}
						system("pause");
						system("cls");
						break;
						case 4:
							printf("Busque o dado aluno atraves de sua matricula:\n\n");
							buscaalunos(total,a);
							system("pause");
							system("cls");
							break;
							case 5:  
								ordena(total,a);//------------------------------------fun��o de ordena��o das matriculas em ordem crescente.
								system("pause");
								system("cls");
								break;
								case 6:
									buscaedita(total,a);//-----------------------------fun��o para buscar e editar as notas.
									system("pause");
									system("cls");
									break;
									case 7:	
										for(i=0;i<total;i++){
											if(a[i].media >maior){
											imaior= i;//variavel imaior serve para identificar a posi��o atual do vetor da struct a[i],
											maior=a[i].media;// aqui a variavel maior toma o valor da a[i].media, sendo assim, gra�as a variavel imaior consigo identifica a posi��o que se encontra o maior valor.
            								}	
										}
										printf( "%d %s teve a maior media da turma %.1f\n",a[imaior].matricula,a[imaior].nome, maior);
										system("pause");
										system("cls");
										break;
										case 8:
											menor = a[i].media;//------------------------------------ declarei menor sendo igual o valor de a[i].matricula para que se comparados no if encontrasse o valor realmente menor.
											for(i=0;i<total;i++){//----------------------------------comando de repeti��o para percorrer os alunos do arquivo que tiver a menor nota.
												if(a[i].media < menor){
													imenor= i;//-------------------------------------imenor seria a posi��o no qual estaria o menor valor de a[i].matricula e sendo assim todos os dados que eu precisasse encontrar estaria na posi��o "imenor" do aluno de menor nota.
													menor=a[i].media;
            									}	
											}
											printf( "%d %s teve a menor media da turma %.1f\n",a[imenor].matricula,a[imenor].nome, menor);//----- encontrado o valor bastou eu usar a variavel imenor para que me localizasse a posi��o do aluno que teve essa menor nota.
											system("pause");
											system("cls");
											break;
											case 9:
												printf("LISTA DE ALUNOS APROVADOS (media >= 6.0):\n");//-----------------------------------essa fun��o ir� dizer exatamente quantos alunos foram aprovados com o nome e a medias dos aprovados ao lado da variavel contadora.
												for(i=0;i<total;i++){	
													if(a[i].media >=6.0){//----------------------------------------------------------------se a media do aluno for maior ou igual a 6 ele ser� aprovado.
														printf( "%-4d - %-7s - Nota final: %.1f\n",apro,a[i].nome, a[i].media );//-------------ira imprimir na tela  o aluno aprovado e com a variavel contando apenas os aprovados
														apro++;
													}
												}
												printf("\nLISTA DE ALUNOS REPROVADOS (media < 6.0):\n\n");//-----------------------------------essa fun��o ir� dizer exatamente quantos alunos foram reprovados com o nome e a medias dos reprovados ao lado da variavel contadora.
												for(i=0;i<total;i++){
													if(a[i].media < 6.0){//----------------------------------------------------------------se a media do aluno for menor que 6 ele ser� reprovado.
														printf( "%-4d - %-7s - Nota final: %.1f\n",rep, a[i].nome, a[i].media );//-------------ira imprimir na tela  o aluno aprovado e com a variavel contando apenas os reprovados
														rep++;
            										}	
												}
												
												break;
												case 10:
													criarquivo(total,a);//-----------------------------caso o usuario inserir 10 criar� o arquivo;
													printf("Arquivo criado com sucesso!\n");//---------o arquivo ser� criado com o nome de aluno2.txt com os alunos com as notas editadas durando o programa.
													system("pause");
													system("cls");
													break;										
		}
	}while(opcao!=0);
}

void criarquivo(int total,aluno*a){//-----------------------------fun��o para criar novo arquivo.
	int i;
	FILE *arquivo2;
	arquivo2 = fopen("alunos2.txt","w");//--------------------------no primeiro arquivo usei "r" para ler, agora como preciso escrever o "w" � a op��o desejada para executar essa finalidade.
	int cont;
	aluno troca;//criei uma nova struct para fazer uma fun��o de auxiliar para que haja a troca da media da struct dentro do "if"
	for (cont=0 ; cont < total ; cont ++){ //primiero for serve para come�ar do zero, e o segundo for para percorrer conforme a posi��o anterior seje menor manter e assim sucessivamente
		for(i=cont+1; i < total ; i++){
			if(a[cont].matricula > a[i].matricula ){
				troca = a[i];
				a[i] = a[cont];
				a[cont] = troca;
			}
		}//--------------------------------------------------algoritmo de ordena��o usado anteriormente para escrever os alunos do arquivo, no arquivo2  ordenadamente pela matr�cula.
	}
	for(i=0;i<total;i++){
		fprintf(arquivo2,"%-4d %-7s %.1f %.1f %.1f media das notas %.1f\n",a[i].matricula, a[i].nome, a[i].nota1, a[i].nota2, a[i].nota3,a[i].media);
	}
	fclose(arquivo2);//----------------------------------------------------------ao abrir o arquivo, fechar.
}
