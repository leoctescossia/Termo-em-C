#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <locale.h> 
#include <windows.h> 
#include <time.h>
#define tam 6
#define pont 100//vetor pra pontuacao

	int a,b,c;
	int coluna;
	int tecla;
	int op;
	int pontos=0;
	
	char nome[100];
	
	void gotoxy( int x, int y)
	{
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});

	}
	
	int pontuacao()
	{
		gotoxy(37,7);
		printf("Pontos do Jogador [%s] : %d\n",nome,pontos);
		
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
	        printf("3 - RANKING POR TEMPO");
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
			
	}
	
	
		
	
	