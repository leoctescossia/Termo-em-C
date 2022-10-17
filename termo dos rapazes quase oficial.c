#include <stdio.h> 
#include <string.h>
#include <stdlib.h> 
#include <conio.h> 
#include <locale.h> 
#include <windows.h> 
#include <time.h>
#define tam 6
#define tam1 5


	int a,b,c;
	int coluna;
	int tecla;
	int op;
	int pontos=0;
	int palavrasorteada;   
	char* palavra[20];
	char nome[100];
	int opcao2=0;
	
	
	void gotoxy( int x, int y)
	{
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});

	}
	
	int pontuacao()
	{
		gotoxy(37,7);
		printf("Pontos do Jogador [%s] : [%d]\n",nome,pontos);
		
	}
	
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
		
	void game()
	{
		setlocale(LC_ALL, "Portuguese");
		inicio_palavra:
		printf("\t=========================================================================================================\n");
		printf("\t*BEM-VINDO AO TERMO DOS RAPAZES, VOCÊ TEM 10 CHANCES PARA ACERTAR A PALAVRA SECRETA DE 5 CARACTERES*\n");
		printf("\t=========================================================================================================\n");
		
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
			
			opcao2=0;
			
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
					printf("\n");
					
						printf("\t\t\t\t\t\tPARABÉNS, VOCÊ ACERTOU!!\n");
						printf("\t\t\t\t\t\t .-=========-.\n");
		              printf("\t\t\t\t\t\t\\ '-=======-'/\n");
		              printf("\t\t\t\t\t\t  |   .=.   |\n");
		    		 printf("\t\t\t\t\t\t((|  {{1}}  |))\n");
		              printf("\t\t\t\t\t\t \\|   /|\\   |/\n");
		               printf("\t\t\t\t\t\t  \\__ '`' __/\n");
		                 printf("\t\t\t\t\t\t     `) (`\n");
		               printf("\t\t\t\t\t\t      /_\\\n");
		              printf("\t\t\t\t\t\t      /_\\\n");
		  
					  	pontos++;
						i=10;
						gotoxy(40,25);printf("Aperte Esc para voltar pro Menu\n");
						break;
						
							}			
				}
				else{
					printf("\n");
				   	printf("\t=========================================================================================================\n");
					printf("\t*PALAVRA INVALIDA, DIGITE UMA PALAVRA DE 5 CARACTERES*\n");
				   	printf("\t=========================================================================================================\n");
			   	}
					
				if(i==10){
					system("cls");
					printf("\n");
					printf("\t=========================================================================================================\n");
					printf("\t*NUMERO DE TENTATIVAS EXCEDIDAS, MAIS SORTE NA PRÓXIMA :)*\n");
					printf("\t=========================================================================================================\n");
					
					printf("Você perdeu, deseja tentar novamente?\n");
					printf("Confirme sua opção : \n1 - Sim\n2 - Não\n");
					scanf("%d",&opcao2);
					if(opcao2==1){goto inicio_palavra;}
					else if(opcao2==2){
						system("cls");
						gotoxy(40,7);printf("A palavra correta era : [%s]\n",palavra[palavrasorteada]);
						gotoxy(40,10);printf("Aperte Esc para voltar pro Menu\n");
					}	
				}		
			}while(i<10);

		}
	
	void creditos()
	{
						gotoxy(40,5);printf("Aperte Esc para sair a qualquer momento!\n");
						gotoxy(39,7);printf("---------------------------------------------\n");
						printf("\n\t\t\t\t\tColaboradores oficiais do projeto:\n");
						printf("\n\t\t\t\t\tLeozinho Escossia\n");
						printf("\n\t\t\t\t\tJoão Vitu Paiva\n");
						printf("\n\t\t\t\t\tVandre o caba mais otario que existe\n");
						printf("\n\t\t\t\t\tFelipi Vale\n");
						printf("\n\t\t\t\t\tJose Marinho\n");
						printf("\n\t\t\t\t\tTradutor de Filipi: Arabe Desconhecido\n");
						gotoxy(39,23);printf("---------------------------------------------\n");
						gotoxy(54,24);printf("@Rapazes Company\n");
	}
	void instrucoes()
	{
		gotoxy(39,7);
		printf("Fique atento as instruções do Termo dos Rapazes!\n");
		gotoxy(39,9);printf("* - > Letra está na palavra e na posição certa!\n");
		gotoxy(39,11);printf("# - > Letra está na palavra porém na posição errada!\n");
		gotoxy(39,13);printf("_ - > Letra não esta na palavra!\n");		
		gotoxy(40,18);printf("Aperte Esc para sair a qualquer momento!\n");
	}
	
	
	int main()
	{
		setlocale(LC_ALL,"Portuguese");
		SetConsoleTitle("Termo dos Rapazes");
		int opcao=0;
		do
		{
			inicio://define aqui o inicio do menu!
			opcao=0;//reseta a escolha das setinhas
			system("cls");
			
			
			gotoxy(43,10);printf("Bem vindo ao Menu do [Termo dos Rapazes]!\n");
			
			//fazer as setinhas
			coluna=0;
			int L=15;
			int L2=L;
			int L3=L+4;
			int L4=L;
			
			gotoxy(coluna+47,L);
			printf("1 - Jogar");
			gotoxy(coluna+47,L+1);
	        printf("2 - RANKINGS POR PONTOS");
	        gotoxy(coluna+47,L+2);
	        printf("3 - INSTRUÇÕES");
	        gotoxy(coluna+47,L+3);
	        printf("4 - CREDITOS");
	        gotoxy(coluna+47,L+4);
	        printf("5 - SAIR\n");
	        //ate aq
	        
	        do{
				gotoxy(coluna+44,L);       
            	printf("-%c",16);    //vai imprimir a setinha
            	gotoxy(-1,24);
				if(kbhit){tecla=getch();}//código pra fazer a setinha se movimentar entre as 5 escolhas
					
					if(tecla==80){
						L2=L;
						L++;
						if(L>L3){L=L4;}
					}	
					
					
					if(tecla==72){
						L2=L;             
                		L--;              
                		if(L<L4){L=L3;}
					}
						
					
					if(L!=L2){
						gotoxy(coluna+44,L2);
						printf(" ");
						gotoxy(coluna+45,L2);
						printf(" ");
						L2=L;
					}
					if(tecla==13){
						opcao=L-(L4-1);
					}
					//ate aqui o codigo do movimento das setinhas
					switch(opcao)//opcoes das setinhas(as escolhas)
					{
					case 1: //caso do jogo
						system("cls");
						game();
						
						do{		//aq é pra voltar pro inicio do menu a qualquer momento se apertar o ESC
							if(kbhit){tecla=getch();}
						}while(tecla!=27);
						break;
					
					case 2:
						system("cls");
						//printf("Pontos : %d\n",pontos);
						pontuacao();
						
						do{ //aq é pra voltar pro inicio do menu a qualquer momento se apertar o ESC
							if(kbhit){tecla=getch();}
						}while(tecla!=27);
						break;
					case 3:
						system("cls");
						instrucoes();
						
						do{ //aq é pra voltar pro inicio do menu a qualquer momento se apertar o ESC
							if(kbhit){tecla=getch();}
								
						}while(tecla!=27);
					
						break;
					case 4:
						system("cls");
						creditos();
						do{ //aq é pra voltar pro inicio do menu a qualquer momento se apertar o ESC
							if(kbhit){tecla=getch();}
								
						}while(tecla!=27);
					
						break;
					case 5:
						system("cls");
						printf("Você pediu para sair\n");
						printf("Confirme sua opção : \n1 - Sim\n2 - Não\n");
						scanf("%d",&op);
						do{
						if(op==1){
						
							system("cls");
							gotoxy(43,10);
							printf("Saindo em ...");
							for(a=0;a<10;a++){
								printf(" %d",a);
								printf(" ");
								Sleep(300);
							}
							printf("\nObrigado por jogar o Termo dos Rapazes!\n");
							exit(0);
							
						}
						else if(op==2){goto inicio;}
							
						else{
						printf("insira uma opção correta\n");
						scanf("%d",&op);
						
						if(op==2){goto inicio;}
						else if(op==1){
						
							system("cls");
							gotoxy(43,10);
							printf("Saindo em ...");
							for(a=0;a<10;a++){
								printf(" %d",a);
								printf(" ");
								Sleep(300);
							}
							printf("\nObrigado por jogar o Termo dos Rapazes!\n");
							exit(0);
						}
							
						}
						return 0;
						
						}while((op!=1)&&(op!=2));
	
						break;
					}
					
			}while(opcao==0);
			
		
		}while(opcao!=5);
		
	return 0;		
	}