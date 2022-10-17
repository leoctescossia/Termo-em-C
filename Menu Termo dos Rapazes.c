#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <locale.h> 
#include <windows.h> 
#include <time.h>
#define tam 6


	int a,b,c;
	int coluna;
	int tecla;
	int op;
	int escolha1[1],t;
	
	void gotoxy( int x, int y)
	{
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});

	}
	

	
	int main()
	{
		setlocale(LC_ALL,"Portuguese");
		SetConsoleTitle("Termo dos Rapazes");
		int opcao=0;
		do
		{
			inicio:
			opcao=0;
			system("cls");
			
			
			gotoxy(43,10);printf("Bem vindo ao Menu do [Termo dos Rapazes]!\n");
			
			
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
				
					switch(opcao)
					{
					case 1:
						system("cls");
						
						srand(time(NULL));
						
						for(t=0;t<3;t++){
						escolha1[t]=rand()%3;
						}
						switch(escolha1[t]){
							case 0:
								game1();
								break;
							case 1:
								game2();
								break;
							case 2:
								game3();
								break;
						}
						//game(); //Vai puxar o código do jogo la em cima no void
						do{
							if(kbhit){tecla=getch();}
						}while(tecla!=27);
						break;
					case 2:
						
						break;
					case 3:
						
						break;
					case 4:
						system("cls");
						gotoxy(5,5);printf("Aperte Esc para sair a qualquer momento!\n");
						printf("\n\n\t\t\t\t\t\tLeozinho show\n");
						printf("\n\n\t\t\t\t\t\tJoão Vitu show\n");
						printf("\n\n\t\t\t\t\t\tVande show\n");
						printf("\n\n\t\t\t\t\t\tFelipi show\n");
						printf("\n\n\t\t\t\t\t\tjose show\n");
						
						do{
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
							exit(0);
						}
						else if(op==2){goto inicio;}
						else if((op!=1)&&(op!=2)){
						printf("insira uma opção correta\n");
						scanf("%d",&op);
						}
						return 0;
						}while((op!=1)&&(op!=2));
	
						break;
					}
					
			}while(opcao==0);
			
		
		}while(opcao!=5);
	
	}
	
	void game1()
	{
		char palavra[tam];
	
	sprintf(palavra, "VASCO");
	
	int i=1;
	int cont = 0;
	int tam1;
	
	printf("\t***********************************\n");
	printf("\t*BEM-VINDO AO TERMO DOS RAPAZES, VOCÊ TEM 5 CHANCES PARA ACERTAR A PALAVRA SECRETA DE 5 CARACTERES*\n");
	printf("\t***********************************\n");
		
	do{	
		printf("\n-%d° tentativa\nDigite uma palavra de 5 caracteres: ", i);
		gets(palavra);
		
		tam1 = strlen(palavra);
		if(tam1==5){
			if(strcmpi(palavra,"VASCO")==0){
				printf("\tPARABÉNS, VOCÊ ACERTOU!!\n");
				printf("\t\t .-=========-.\n");
              printf("\t\t \\'-=======-'/\n");
              printf("\t\t |   .=.   |\n");
    		 printf("\t\t((|  {{1}}  |))\n");
              printf("\t\t \\|   /|\\   |/\n");
               printf("\t\t  \\__ '`' __/\n");
                 printf("\t\t    `) (`\n");
               printf("\t\t  /__\\_\n");
              printf("\t\t /_____\\\n");
				break;
			}
			if(palavra[0]=='V' || palavra[0]=='v'){
				printf("\nExiste a letra V na 1° posição da palavra\n");
			}
			if(palavra[1]=='A' || palavra[1]=='a'){
				printf("\nExiste a letra A na 2° posição da palavra\n");
			}
			if(palavra[2]=='S' || palavra[2]=='s'){
				printf("\nExiste a letra S na 3° posição da palavra\n");
			}
			if(palavra[3]=='C' || palavra[3]=='c'){
				printf("\nExiste a letra C na 4° posição da palavra\n");
			}
			if(palavra[4]=='O' || palavra[4]=='o'){
				printf("\nExiste a letra O na 5° posição da palavra\n");
			}
			cont++;
			i++;
		}
		else{
			printf("\t********************\n");
			printf("\t*PALAVRA INVALIDA, DIGITE UMA PALAVRA DE 5 CARACTERES*\n");
			printf("\t********************\n");
		}
		
		if(cont==5){
			printf("\t********************\n");
			printf("\t*NUMERO DE TENTATIVAS EXCEDIDAS, MAIS SORTE NA PRÓXIMA :)*\n");
			printf("\t********************\n");
		}

		
		}while(cont<5);		
	}
	void game2()
	{
		char palavra[tam];
	
	sprintf(palavra, "TERMO");
	
	int i=1;
	int cont = 0;
	int tam1;
	
	printf("\t***********************************\n");
	printf("\t*BEM-VINDO AO TERMO DOS RAPAZES, VOCÊ TEM 5 CHANCES PARA ACERTAR A PALAVRA SECRETA DE 5 CARACTERES*\n");
	printf("\t***********************************\n");
		
	do{	
		printf("\n-%d° tentativa\nDigite uma palavra de 5 caracteres: ", i);
		gets(palavra);
		
		tam1 = strlen(palavra);
		if(tam1==5){
			if(strcmpi(palavra,"TERMO")==0){
				printf("\tPARABÉNS, VOCÊ ACERTOU!!\n");
				printf("\t\t .-=========-.\n");
              printf("\t\t \\'-=======-'/\n");
              printf("\t\t |   .=.   |\n");
    		 printf("\t\t((|  {{1}}  |))\n");
              printf("\t\t \\|   /|\\   |/\n");
               printf("\t\t  \\__ '`' __/\n");
                 printf("\t\t    `) (`\n");
               printf("\t\t  /__\\_\n");
              printf("\t\t /_____\\\n");
				break;
			}
			if(palavra[0]=='T' || palavra[0]=='t'){
				printf("\nExiste a letra T na 1° posição da palavra\n");
			}
			if(palavra[1]=='E' || palavra[1]=='e'){
				printf("\nExiste a letra E na 2° posição da palavra\n");
			}
			if(palavra[2]=='R' || palavra[2]=='r'){
				printf("\nExiste a letra R na 3° posição da palavra\n");
			}
			if(palavra[3]=='M' || palavra[3]=='m'){
				printf("\nExiste a letra M na 4° posição da palavra\n");
			}
			if(palavra[4]=='O' || palavra[4]=='o'){
				printf("\nExiste a letra O na 5° posição da palavra\n");
			}
			cont++;
			i++;
		}
		else{
			printf("\t********************\n");
			printf("\t*PALAVRA INVALIDA, DIGITE UMA PALAVRA DE 5 CARACTERES*\n");
			printf("\t********************\n");
		}
		
		if(cont==5){
			printf("\t********************\n");
			printf("\t*NUMERO DE TENTATIVAS EXCEDIDAS, MAIS SORTE NA PRÓXIMA :)*\n");
			printf("\t********************\n");
		}

		
		}while(cont<5);		
	}
	void game3()
	{
		char palavra[tam];
	
	sprintf(palavra, "NOBRE");
	
	int i=1;
	int cont = 0;
	int tam1;
	
	printf("\t***********************************\n");
	printf("\t*BEM-VINDO AO TERMO DOS RAPAZES, VOCÊ TEM 5 CHANCES PARA ACERTAR A PALAVRA SECRETA DE 5 CARACTERES*\n");
	printf("\t***********************************\n");
		
	do{	
		printf("\n-%d° tentativa\nDigite uma palavra de 5 caracteres: ", i);
		gets(palavra);
		
		tam1 = strlen(palavra);
		if(tam1==5){
			if(strcmpi(palavra,"NOBRE")==0){
				printf("\tPARABÉNS, VOCÊ ACERTOU!!\n");
				printf("\t\t .-=========-.\n");
              printf("\t\t \\'-=======-'/\n");
              printf("\t\t |   .=.   |\n");
    		 printf("\t\t((|  {{1}}  |))\n");
              printf("\t\t \\|   /|\\   |/\n");
               printf("\t\t  \\__ '`' __/\n");
                 printf("\t\t    `) (`\n");
               printf("\t\t  /__\\_\n");
              printf("\t\t /_____\\\n");
				break;
			}
			if(palavra[0]=='N' || palavra[0]=='n'){
				printf("\nExiste a letra N na 1° posição da palavra\n");
			}
			if(palavra[1]=='O' || palavra[1]=='o'){
				printf("\nExiste a letra O na 2° posição da palavra\n");
			}
			if(palavra[2]=='B' || palavra[2]=='b'){
				printf("\nExiste a letra B na 3° posição da palavra\n");
			}
			if(palavra[3]=='R' || palavra[3]=='r'){
				printf("\nExiste a letra R na 4° posição da palavra\n");
			}
			if(palavra[4]=='E' || palavra[4]=='e'){
				printf("\nExiste a letra E na 5° posição da palavra\n");
			}
			cont++;
			i++;
		}
		else{
			printf("\t********************\n");
			printf("\t*PALAVRA INVALIDA, DIGITE UMA PALAVRA DE 5 CARACTERES*\n");
			printf("\t********************\n");
		}
		
		if(cont==5){
			printf("\t********************\n");
			printf("\t*NUMERO DE TENTATIVAS EXCEDIDAS, MAIS SORTE NA PRÓXIMA :)*\n");
			printf("\t********************\n");
		}

		
		}while(cont<5);		
	}