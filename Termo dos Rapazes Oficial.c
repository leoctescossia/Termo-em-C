#include <stdio.h> 
#include <string.h>
#include <stdlib.h> 
#include <conio.h> 
#include <locale.h> 
#include <windows.h> 
#include <time.h>
#include <ctype.h>
#define tam 6 //vetor para a palavra das tentativas
#define tam1 5 //vetor para a palavra que copiara as tentativas para termos um controle


	//variaveis auxiliares da setinha
	int a,b,c;
	int coluna;
	int tecla;
	int op;
	
	int pontos=0; //pontos da pontuação
	int palavrasorteada; //variavel da palavra sorteada pelo rand()
	char* palavra[20]; //variavel das palavras pré definidas
	char nome[100]; //nome do usuário
	int opcao2=0; //opções das setinhas
	
	//variaveis do tempo
	float tempo;
	time_t t_ini, t_fim;
	int k,l;
	float min=0;
	int minu,seg;
	
	
	
	void gotoxy( int x, int y)//definição das coordenadas no prompt
	{
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y}); //função pra definir

	}
	
	int pontuacao() //pontuação do jogador
	{
		
		gotoxy(42,6);printf("Aperte Esc para sair a qualquer momento!\n");
		gotoxy(39,8);printf("---------------------------------------------\n");
		gotoxy(50,11);printf("Pontos do Jogador");
		gotoxy(50,13);printf("Nome - > %s",nome);
		gotoxy(50,15);printf("Quantidade - >"); printf("\033[0;31m"); printf(" %d\n",pontos);
		printf("\033[0m");
		gotoxy(39,18);printf("---------------------------------------------\n");
		
		
	}
	
	void sorteio() //sorteio da palavra
	{
		//palavras definidas dentro do vetor
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
		    palavrasorteada = rand() % 20; //variavel recebendo a palavra sorteada
		}
		
	void game()
	{	
		
		
		setlocale(LC_ALL, "Portuguese");
		printf("\033[0;33m"); //dar a cor ao texto
		gotoxy(13,1);printf("*BEM-VINDO AO TERMO DOS RAPAZES, VOCÊ TEM 10 CHANCES PARA ACERTAR A PALAVRA SECRETA DE 5 CARACTERES*");
		printf("\033[0m"); //voltar a cor branca original
		gotoxy(40,5);printf("Digite seu nome para começar: ");
		gets(nome); //leitura do nome do usuário
		pontos=0; //zerar os pontos a cada rodada	
		
		//ponto de partida
		inicio_palavra:
			
		system("cls");
		printf("\n\t\t\t\t\tSeja bem-vindo"); /*printar a cor do nome em azul*/ printf("\033[0;34m"); printf(" %s",nome); /*voltar a cor ao normal*/ printf("\033[0m"); printf(", dê o seu melhor!\n\n");
		printf("\t\t\t\t\t     VOCÊ POSSUI"); printf("\033[0;31m"); printf(" 10 TENTATIVAS\n"); printf("\033[0m");
		
		
		
		char nome[100]; //nome do usuário
		char tentativas[tam]; //palavras digitadas pelo usuário
		int i=0,p=0, cont=0, cont1=0, cont2, tam_palavra,cont3; //contadores de tamanho e dos limites de tentativas
		char palavra1[tam1]; //palavra auxiliadora 

		
			
		sorteio(); //função que busca o sorteio la em cima
		strcpy(palavra1,palavra[palavrasorteada]); //copia da palavra sorteada
		
		//contagem do tempo
		t_ini = time(NULL);
			for(k = 0; i>60000;k++){
				for(l=0;l<60000;l++);
				Sleep(1000);
			}
				
		do
		{
			
			opcao2=0;//ponto de partida as opções la em baixo 0
				
				printf("\033[0;31m"); printf("\n%d° ",i+1);printf("\033[0m"); printf("tentativa :\n\nDigite uma palavra de 5 caracteres: ");
				gets(tentativas); //palavras digitadas pelo usuário
				strupr(tentativas); //deixar as palavras em maiuscúlo
				
				tam_palavra = strlen(tentativas); //ler o tamanho da palavra pra controlar se ela é de 5 caracteres
				printf("\n");
				printf("\t\t\t\t\t");
				
				if(tam_palavra==5) //enquanto a palavra tiver certa em 5 caracteres
				{
					
				for(cont=0; cont<tam1; cont++)//for pra varer a palavra
				{
					
						printf("%c ", tentativas[cont]);
						
				}
				printf("\n");
				printf("\t\t\t\t\t");	
				//for para varer as posições das letras na palavra
				for(cont1=0; cont1<tam1; cont1++)
				{
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
				cont3++;//contador do limite das tentativas
				i++;//contador do limite das tentativas
				
				if(strcmp(tentativas,palavra[palavrasorteada])==0)//se a palavra for a correta
				{
					printf("\n");
					
						printf("\033[0;31m"); 
						printf("\t\t\t\t\t     PARABÉNS, VOCÊ ACERTOU!!\n");
						printf("\033[0m");
						printf("\033[0;33m");
						
						printf("\t\t\t\t\t\t .-=========-.\n");
		              printf("\t\t\t\t\t\t\\ '-=======-'/\n");
		              printf("\t\t\t\t\t\t  |   .=.   |\n");
		    		 printf("\t\t\t\t\t\t((|  {{1}}  |))\n");
		              printf("\t\t\t\t\t\t \\|   /|\\   |/\n");
		               printf("\t\t\t\t\t\t  \\__ '`' __/\n");
		                 printf("\t\t\t\t\t\t     `) (`\n");
		               printf("\t\t\t\t\t\t      /_\\\n");
		              printf("\t\t\t\t\t\t      /_\\\n");
		              
		  			  printf("\033[0m");
		  			  
					  	pontos++; //contar o ponto
						i=10; //fim do loop
						t_fim = time(NULL); //parar o contador do tempo
						tempo = difftime(t_fim,t_ini); //parar o contador do tempo
						min = tempo/60; //fazer os minutos do contador
						minu = min;
						seg = (min-minu)*60; //fazer os segundos do contador
						printf("\n");
						printf("\t\t\t\t Seu tempo de jogo foi de [%d] minutos e [%d] segundos\n",minu,seg); //mostrar o tempo gasto
						printf("\n");
						printf("\t\t\t\t\t Aperte Esc para voltar pro Menu");
						break;
							}			
				}
				else //se a palavra digitada não possuir 5 caracteres
				{
					printf("\n");
				   	
					printf("\033[0;31m"); printf("\t\tPALAVRA INVALIDA, DIGITE UMA PALAVRA DE 5 CARACTERES*\n");printf("\033[0m");
				   	
			   	}
					
				if(i==10) //quando as tentativas chegarem no limite
				{
					system("cls");
					printf("\n");
					printf("\033[0;31m");
					gotoxy(35,1);printf("*NUMERO DE TENTATIVAS EXCEDIDAS, MAIS SORTE NA PRÓXIMA :)\n");
					printf("\033[0m");
					
					t_fim = time(NULL);//parar o contador do tempo
					tempo = difftime(t_fim,t_ini);//parar o contador do tempo
					min = tempo/60;//fazer os minutos do contador
					minu = min;
					seg = (min-minu)*60;//fazer os segundos do contador
					printf("\n");
					gotoxy(35,4);printf("Seu tempo de jogo foi de [%d] minutos e [%d] segundos\n",minu,seg);//mostrar o tempo gasto
					printf("\n");
					//perguntar se quer jogar de novo
					printf("\033[0;31m");gotoxy(50,9);printf("Você perdeu!");printf("\033[0m");
					gotoxy(50,11);printf("Confirme sua opção :"); 
					gotoxy(50,13);printf("1 - Sim, Para tentar novamente\n");
					gotoxy(50,15);printf("2 - Não, Para voltar para o menu\n");
					gotoxy(50,17);scanf("%d",&opcao2);
					getchar();
					if(opcao2==1){goto inicio_palavra;} //se sim voltar pro começo das tentativas
					else if(opcao2==2) //se não voltar para o menu e mostrar a palavra 
					{
						system("cls");
						printf("\033[0;33m"); gotoxy(40,7);printf("A palavra correta era : [%s]",palavra[palavrasorteada]);printf("\033[0m");
						gotoxy(40,10);printf("Aperte Esc para voltar pro Menu");
						
					}	
				}		
			}while(i<10); //limite das tentativas
		

		}
	
	void creditos() //creditos
	{
	
						gotoxy(41,5);printf("Aperte Esc para sair a qualquer momento!\n");
						gotoxy(39,7);printf("---------------------------------------------\n");
						printf("\n\t\t\t\t\tColaboradores oficiais do projeto:\n");
						printf("\n\t\t\t\t\tLeonardo Couto da Escóssia\n");
						printf("\n\t\t\t\t\tJoão Vitor Paiva Maia\n");
						printf("\n\t\t\t\t\tVandré Cortês de Oliveira\n");
						printf("\n\t\t\t\t\tFelipe de Paiva Vale\n");
						printf("\n\t\t\t\t\tJose Ivanilson Marinho da Silva\n");
						printf("\n\t\t\t\t\tTradutor de Filipi: Arabe Desconhecido\n");
						gotoxy(39,23);printf("---------------------------------------------\n");
						gotoxy(52,25);printf("@Rapazes Company\n");
	
	}
	
	void instrucoes() //instruções do jogo
	{
		gotoxy(39,7);
		printf("Fique atento as instruções do Termo dos Rapazes!\n");
		printf("\033[0;34m"); gotoxy(39,11);printf("*"); printf("\033[0m"); printf(" - > Letra está na palavra e na posição certa!\n");
		printf("\033[0;34m"); gotoxy(39,13);printf("#"); printf("\033[0m"); printf(" - > Letra está na palavra porém na posição errada!\n");
		printf("\033[0;34m"); gotoxy(39,15);printf("_"); printf("\033[0m"); printf(" - > Letra não esta na palavra!\n");		
		gotoxy(40,19);printf("Aperte Esc para sair a qualquer momento!\n");
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
			
			
			gotoxy(43,10);printf("Bem vindo ao Menu do"); printf("\033[0;34m"); printf(" Termo dos Rapazes!\n"); printf("\033[0;37m");
			gotoxy(50,25);printf("@Rapazes Company\n"); 
			//fazer as setinhas
			coluna=0;
			int L=15;
			int L2=L;
			int L3=L+4;
			int L4=L;
			
			printf("\033[0;33m"); //cor amarela
			
			gotoxy(coluna+47,L);
			printf("1 - Jogar");
			gotoxy(coluna+47,L+1);
	        printf("2 - RANKINGS POR PONTOS");
	        gotoxy(coluna+47,L+2);
	        printf("3 - INSTRUÇÕES");
	        gotoxy(coluna+47,L+3);
	        printf("4 - CREDITOS");
	        gotoxy(coluna+47,L+4);
	        printf("5 - SAIR");
	        //ate aq
	        
	        printf("\033[0;37m"); //cor branca
	        
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
						//codigo da saida
						system("cls");
						//opções
						gotoxy(50,9);printf("Você pediu para sair");
						gotoxy(50,11);printf("Confirme sua opção :"); 
						gotoxy(50,13);printf("1 - Sim");
						gotoxy(50,15);printf("2 - Não");
						gotoxy(50,17);scanf("%d",&op);
						getchar();
						do{
						if(op==1) // se sim ele temporiza e sai
						{
							//temporizador
							system("cls");
							gotoxy(43,10);
							printf("Saindo em ...");
							for(a=0;a<10;a++){
								printf(" %d",a);
								printf(" ");
								Sleep(300);
							}
							printf("\nObrigado por jogar o Termo dos Rapazes!\n");
							exit(0); //pra ele sair do programa
							
						}
						else if(op==2){goto inicio;} //se não ele volta pro inicio do menu
							
						else //se for digitado uma opçao diferente de 1 e 2
						{
						printf("\nInsira uma opção correta:");
						scanf("%d",&op);
						
						if(op==2){goto inicio;} //se não ele volta pro inicio do menu
						else if(op==1) // se sim ele temporiza e sai
						{
							//temporizador
							system("cls");
							gotoxy(43,10);
							printf("Saindo em ...");
							for(a=0;a<10;a++){
								printf(" %d",a);
								printf(" ");
								Sleep(300);
							}
							printf("Obrigado por jogar o Termo dos Rapazes!\n");
							exit(0); //sair do programa
						}
							
						}
						return 0; //retornar 0 no final
						
						}while((op!=1)&&(op!=2)); //enquanto não for as 2 opções
	
						break;
					}
					
			}while(opcao==0); 
			
		
		}while(opcao!=5);
		
	return 0;
			
}