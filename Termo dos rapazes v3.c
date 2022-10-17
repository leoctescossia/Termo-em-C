#include <stdio.h> 
#include <string.h>
#include <stdlib.h> 
#include <conio.h> 
#include <locale.h> 
#include <windows.h> 
#include <time.h>
#define tam 6
#define tam1 5
#define pont 100//vetor pra pontuacao

	int a,b,c;
	int coluna;
	int tecla;
	int op;
	int pontos=0;
	int palavrasorteada;   
	char* palavra[20];
	char nome[100];
	
	
	void sorteio() {
		    palavra[0]="SAGAZ";
		    palavra[1]="MEXER";
		    palavra[2]="TERMO";
		    palavra[3]="NOBRE";
			palavra[4]="SENSO";
			palavra[5]="FORTE";
			palavra[6]="AFETO";
			palavra[7]="VIGOR";
			palavra[8]="FELIZ";
			palavra[9]="FAZER";
			palavra[10]="ASSIM";
			palavra[11]="PESAR";
		    palavra[12]="POSSE";
		    palavra[13]="CAUSA";
		    palavra[14]="DEVER";
			palavra[15]="CEDER";
			palavra[16]="TEMOR";
			palavra[17]="COMUM";
			palavra[18]="ESTAR";
			palavra[19]="MUNDO";
			palavra[20]="ARROZ";
		    srand(time(NULL));
		    palavrasorteada = rand() % 20;
		}
		
	int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("\t\t\t\t\t************\n");
		printf("\t\t\t\t\t*BEM-VINDO AO TERMO DOS RAPAZES*\n");
		printf("\t\t\t\t\t************\n\n");
		
		printf("\t\t\t\t\tDigite seu nome para começar: ");
		gets(nome);	
		system("cls");
		printf("\n\t\t\t\t\tSeja bem-vindo %s, dê o seu melhor!\n\n", nome);
		printf("\t\t\t\t\tVOCÊ POSSUI 10 TENTATIVAS\n");
		
		char nome[100];
		char tentativas[tam1];
		int i=0,p=0, cont=0, cont1=0, cont2, tam_palavra,cont3;
		char palavra1[tam1];
		
			
		sorteio();
		strcpy(palavra1,palavra[palavrasorteada]);
		printf(" %s \n",palavra1);
			
		do{
			
				printf("\n-%d° tentativa\nDigite uma palavra de 5 caracteres: ", i+1);
				gets(tentativas);
				
				tam_palavra = strlen(tentativas);
				printf("\n");
				printf("\t\t\t\t\t");
				
				if(tam_palavra==5){
					
				for(cont=0; cont<tam1; cont++){
					
						printf("%c ", tentativas[cont]);
						
				}
				
				printf("\n");
				
				printf("\t\t\t\t\t");	
				for(cont1=0; cont1<tam1; cont1++){
					cont2=0;
					
					if(tentativas[cont1]==palavra1[cont1]){
						printf("* ");
					}
					else if(tentativas[cont1]==palavra1[cont2]||tentativas[cont1]==palavra1[cont2+1]||tentativas[cont1]==palavra1[cont2+2]||tentativas[cont1]==palavra1[cont2+3]||tentativas[cont1]==palavra1[cont2+4]){
						printf("# ");
					}
					else{
						printf("_ ");
					}
					
				}
				
				printf("\n");
				cont3++;
				i++;
				
				
				if(strcmp(tentativas,palavra[palavrasorteada])==0){
					
						printf("\tPARABÉNS, VOCÊ ACERTOU!!\n");
						printf("\t\t .-=========-.\n");
		              printf("\t\t \\'-=======-'/\n");
		              printf("\t\t  |   .=.   |\n");
		    		 printf("\t\t((|  {{1}}  |))\n");
		              printf("\t\t \\|   /|\\   |/\n");
		               printf("\t\t  \\__ '`' __/\n");
		                 printf("\t\t    `) (`\n");
		               printf("\t\t     /_\\\n");
		              printf("\t\t    /_\\\n");
				
						i=10;
						break;
						pontos=pontos+1;
			
				}
				
				
				
								
				}
				else{
				   	printf("\t**\n");
					printf("\t*PALAVRA INVALIDA, DIGITE UMA PALAVRA DE 5 CARACTERES*\n");
				   	printf("\t**\n");
			   	}
				
				   
				
				if(i==10){
					system("cls");
					printf("\n");
					printf("\t\n*******************\n");
					printf("\t*NUMERO DE TENTATIVAS EXCEDIDAS, MAIS SORTE NA PRÓXIMA :)*\n");
					printf("\t\n*******************\n");
				}		
			}while(i<10);
			
			
		}
	
	void gotoxy( int x, int y)
	{
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});

	}