#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
//------------------------------------------------//
char nome[50];
char nome2[50];
char nome3[50];
char nome4[50];
char nome5[50];

char email[60];
char email2[60];
char email3[60];
char email4[60];
char email5[60];

char tel[11];
char tel2[11];
char tel3[11];
char tel4[11];
char tel5[11];



int verifi;
int cont;
int w;
int i;
int j=0;
int y;
//------------------------------------------------//
char fazerCadastro();
char mostCadastro();
//------------------------------------------------//
char mostCadastro()
{	

	system("cls");
	
		printf("\n\t\t\t\t\t\t---CLIENTES CADASTRADOS---\n");
		printf("\n\n");
		
		printf("\n\n*******************************\n\n");
		
		printf("Cliente => 1\n");
		printf("\nCódigo --> 001\n");	
		printf("\nNome:%s",nome);
		printf("\nEmail:%s",email);
		printf("\nTelefone:%s",tel);
		
		
		printf("\n\n*******************************\n\n");
		
		printf("Cliente => 2\n");
		printf("\nCódigo --> 002\n");	
		printf("\nNome:%s",nome2);
		printf("\nEmail:%s",email2);
		printf("\nTelefone:%s",tel2);
		
		
		
		printf("\n\n*******************************\n\n");
		
		printf("Cliente => 3\n");
		printf("\nCódigo --> 003\n");	
		printf("\nNome:%s",nome3);
		printf("\nEmail:%s",email3);
		printf("\nTelefone:%s",tel3);
		
		
		printf("\n\n*******************************\n\n");
		
		printf("Cliente => 4\n");
		printf("\nCódigo --> 004\n");	
		printf("\nNome:%s",nome4);
		printf("\nEmail:%s",email4);
		printf("\nTelefone:%s",tel4);
		
		
		printf("\n\n*******************************\n\n");
		
		printf("Cliente => 5\n");
		printf("\nCódigo --> 005\n");		
		printf("\nNome:%s",nome5);
		printf("\nEmail:%s",email5);
		printf("\nTelefone:%s",tel5);
		
		
		printf("\n\n*******************************\n\n");
		
		
							
}
//------------------------------------------------//

char fazerCadastro()
{
	do
	{
		w=0;
		w++;
			system ("cls");
				printf("\n\t\tCADASTRAMENTO DE CLIENTES:\n");
				printf("\n-------------------------------");
				printf("\nCliente -->%d",w);	
				printf("\n-------------------------------");

				printf("\nNome:");
				fgets(nome,50,stdin);
				fflush(stdin);
		
				printf("\nE-mail:");
				fgets(email,60,stdin);
				fflush(stdin);
		
				printf("\nTelefone:");
				fgets(tel,11,stdin);
				fflush(stdin);
				printf("\n******************");	
				printf("\nCódigo do Cliente---> 001\n");				
				printf("******************");	
			
			printf("\n\n");	
			system("pause");		
			system("cls");
		w++;
			system ("cls");
				printf("\n\t\tCADASTRAMENTO DE CLIENTES:\n");
				printf("\n-------------------------------");
				printf("\nCliente -->%d",w);	
				printf("\n-------------------------------");

				printf("\nNome:");
				fgets(nome2,50,stdin);
				fflush(stdin);
		
				printf("\nE-mail:");
				fgets(email2,60,stdin);
				fflush(stdin);
		
				printf("\nTelefone:");
				fgets(tel2,11,stdin);
				fflush(stdin);
				printf("\n******************");	
				printf("\nCódigo do Cliente---> 002\n");				
				printf("******************");	
		
			printf("\n\n");			
			system("pause");	
			system("cls");
		
		
		w++;
			system ("cls");
				printf("\n\t\tCADASTRAMENTO DE CLIENTES:\n");
				printf("\n-------------------------------");
				printf("\nCliente -->%d",w);	
				printf("\n-------------------------------");

				printf("\nNome:");
				fgets(nome3,50,stdin);
				fflush(stdin);
		
				printf("\nE-mail:");
				fgets(email3,60,stdin);
				fflush(stdin);
		
				printf("\nTelefone:");
				fgets(tel3,11,stdin);
				fflush(stdin);
				printf("\n******************");	
				printf("\nC�digo do Cliente---> 003\n");				
				printf("******************");	
		
			printf("\n\n");			
			system("pause");	
			system("cls");
			
		w++;
			system ("cls");
				printf("\n\t\tCADASTRAMENTO DE CLIENTES:\n");
				printf("\n-------------------------------");
				printf("\nCliente -->%d",w);	
				printf("\n-------------------------------");

				printf("\nNome:");
				fgets(nome4,50,stdin);
				fflush(stdin);
		
				printf("\nE-mail:");
				fgets(email4,60,stdin);
				fflush(stdin);
		
				printf("\nTelefone:");
				fgets(tel4,11,stdin);
				fflush(stdin);
				printf("\n******************");	
				printf("\nC�digo do Cliente---> 004\n");				
				printf("******************");	
		
			printf("\n\n");			
			system("pause");		
			system("cls");
		
		w++;
			system ("cls");
				printf("\n\t\tCADASTRAMENTO DE CLIENTES:\n");
				printf("\n-------------------------------");
				printf("\nCliente -->%d",w);	
				printf("\n-------------------------------");
	
				printf("\nNome:");
				fgets(nome5,50,stdin);
				fflush(stdin);
		
				printf("\nE-mail:");
				fgets(email5,60,stdin);
				fflush(stdin);
		
				printf("\nTelefone:");
				fgets(tel5,11,stdin);
				fflush(stdin);
				printf("\n******************");	
				printf("\nC�digo do Cliente---> 005\n");				
				printf("******************");	
					
			printf("\n\n");				
			system("pause");		
			system("cls");
	}while(w < 5);
	
		system("cls");
		printf("\n\n\t\t\t\t**AGENDA LOTADA!**\n\n\n");
		printf("\n\n\t\t\t\t**AGENDA LOTADA!**\n\n\n");
		printf("\n\n\t\t\t\t**AGENDA LOTADA!**\n\n\n");
		printf("\n\n\t\t\t\t**AGENDA LOTADA!**\n\n\n");
		
		j++;
}

//------------------------------------------------//
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int x;
	
		do
		{
		printf("\t\t\t\t\t  ---Menu de Cadastramento---");
		printf("\n\n1 - INICIAR CADASTRAMENTOS\t");
		printf("\n\n2 - MOSTRAR LISTA (TODOS CADASTROS)");
		printf("\n\n0 - SAIR!\t");
		printf("\t\t\t  SELECIONE O QUE DESEJA...--> ");
			scanf("%d", &x);
		printf("\n\n\t\t\t\t\t    VOCE SELECECIONOU--> %d\n\n\n", x);
			fflush(stdin);
				switch (x)
				{
					case (1): 
						system("pause");
						fazerCadastro(); 
						system("pause");
						system("cls");
						break;
					case (2):
						if(j==0){
							system("cls");
							printf("\n\n\t\t\t---AGENDA VAZIA---");
							printf("\n\n\t\t\t---AGENDA VAZIA---");
							printf("\n\n\t\t\t---AGENDA VAZIA---");
							printf("\n\n\t\t\t---AGENDA VAZIA---\n\n\n");
							system("pause");
							system("cls");
						}else{
							system("pause");
							mostCadastro();
							system("pause");
							system("cls");
						}
						break;
					case (0):
						printf("\n\n\n\t\t\t\t\tVOCE ESCOLHEU SAIR! VOLTE SEMPRE!\n\n\n\n");
						exit(0);
						break;
					default:
						system("pause");
						system("cls");
						printf("\n\n\n\t\t\t\t\t\tERRO, OP��O INV�LIDA!..\n\n\t\t\t\t\t\t  INSIRA NOVAMENTE!\n\n\n\n");
						system("pause");
						system("cls");
						break;
				}
	}while(x!=0);
}
