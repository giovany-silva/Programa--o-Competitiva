#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char resp,inicio;
	char cert='s';
	char nome[40];
	int facil=0,cont=0,nivel;
	int certo_1=0,errado_1=0,contp_1=1,totp_1=1;

	printf ("*=============================================================================*\n");printf ("|        ___   ___ ___   ___ _________ ___     ___ _________ _________        |\n");printf ("|        XXX   XXX XXX_  XXX XXXXXXXXX XXX_   _XXX XXXXXXXXX XXXXXXXXX        |\n");printf ("|        XXX   XXX XXXX_ XXX XXXXXXXXX XXXX_ _XXXX XXXXXXXXX XXXXXXXXX        |\n");	printf ("|        XXX   XXX XXXXX_XXX XXX____   XXXXX_XXXXX XXX___XXX    XXX           |\n");printf ("|        XXX   XXX XXXXXXXXX XXXXXXX   XXX XXX XXX XXXXXXXXX    XXX           |\n");printf ("|        XXX___XXX XXX XXXXX XXX______ XXX  X  XXX XXXXXXXXX    XXX           |\n");	printf ("|        XXXXXXXXX XXX  XXXX XXXXXXXXX XXX     XXX XXX   XXX    XXX           |\n");printf ("|        XXXXXXXXX XXX   XXX XXXXXXXXX XXX     XXX XXX   XXX    XXX           |\n");printf ("|                                                                             |\n");	printf ("*=============================================================================*\n");printf ("|          CAMPUS UNIVERSITARIO DO VALE DO TELES PIRES - COLIDER - MT         |\n");printf ("|      THIAGO CESAR SERRILHO - 2o SEMESTRE - LICENCIATURA EM COMPUTACAO       |\n");	printf ("|          E-mails: webserrilho@hotmail.com -- webserrilho@gmail.com          |\n");printf ("*=============================================================================*\n\n");	printf ("*=============================================================================*\n");	printf ("|======================| JOGO DE PERGUNTAS E RESPOSTAS |======================|\n");printf ("*=============================================================================*\n");
	printf ("\nInforme o nome do participante e em seguida pressione \"enter\".\n\n");
	printf ("\nNOME DO PARTICIPANTE: ");
	gets(nome);
	system("cls");
	printf ("\nSEJA BEM VINDO \"%s\"\n",nome);
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Este e um jogo divertido de perguntas e respostas. O jogador devera escolher\n");
	printf ("dentre as 4 alternativas apenas uma e em seguida pressionar \"enter\".\n\n");
	printf ("O jogo possui 3 niveis de dificuldade:\n\n");
	printf ("Nivel facil   - Cada resposta certa valera 2 pontos\n");
	printf ("Nivel medio   - Cada resposta certa valera 4 pontos\n");
	printf ("Nivel dificil - Cada resposta certa valera 6 pontos\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Boa sorte e bom jogo\n\n");
	printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
	dificuldade:
	printf ("*-----------------------------*\n");
	printf ("|    NIVEIS DE DIFICULDADE    |\n");
	printf ("*-----------------------------*\n");
	printf ("|  1 - NIVEL FACIL            |\n");
	printf ("|  2 - NIVEL MEDIO            |\n");
	printf ("|  3 - NIVEL DIFICIL          |\n");
	printf ("*-----------------------------*\n");
	printf ("DESEJA JOGAR EM QUAL NIVEL? \n");
	scanf ("%d",&nivel);
	system("cls");
	switch (nivel)
	{
		case 1 :
		{
			system("cls");
			time_t tempo;struct tm *data;time(&tempo);
			data = localtime(&tempo);
			printf("*=============================================================================*\n");
			printf("|  ___   ___ ___ ___    ___ _________ ___                                     |\n");
			printf("|  XXX_  XXX XXX XXX    XXX XXXXXXXXX XXX                                     |\n");
			printf("|  XXXX_ XXX XXX XXX    XXX XXXXXXXXX XXX                                     |\n");
			printf("|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX                                     |\n");
			printf("|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX                                     |\n");
			printf("|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______                               |\n");
			printf("|  XXX  XXXX XXX    XXXX    XXXXXXXXX XXXXXXXXX                               |\n");
			printf("|  XXX   XXX XXX     XX     XXXXXXXXX XXXXXXXXX                               |\n");
			printf("|                                _________ _________ _________ ___ ___        |\n");
			printf("|                                XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX        |\n");
			printf("|                                XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX        |\n");
			printf("|                                XXX___    XXX___XXX XXX       XXX XXX        |\n");
			printf("|                                XXXXXX    XXXXXXXXX XXX       XXX XXX        |\n");
			printf("|                                XXXXXX    XXXXXXXXX XXX______ XXX XXX______  |\n");
			printf("|                                XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX  |\n");
			printf("|                                XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX  |\n");
			printf("|                                                                             |\n");
			printf("*=============================================================================*\n\n");
			printf ("              AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 2 PONTOS CADA\n\n");

			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUANTO SAO 2+2?\n");
			printf ("A) 5\n");
			printf ("B) 7\n");
			printf ("C) 4\n");
			printf ("D) 2\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"c\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("O QUE ESTA ESCRITO NA BANDEIRA DO BRASIL?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) ORDEM E REGRESSO\n");
			printf ("B) ORDEM E RETROCESSO\n");
			printf ("C) ORDEM E PROGRESSO\n");
			printf ("D) PROGRESSO E ORDEM\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"c\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL O SIGNIFICADO DA PALAVRA INGLESA 'HORSE'?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) CASA\n");
			printf ("B) CAVALO\n");
			printf ("C) ELEFANTE\n");
			printf ("D) HIPOPÓTAMO\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("COMO E CONHECIDO O INVENTOR DO AVIAO?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) SANTOS DUMONT\n");
			printf ("B) SANTOS DUMORRO\n");
			printf ("C) SANTOS DRUMOM\n");
			printf ("D) SANTOS SILVA\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL DOS ITENS ABAIXO NAO E UMA FRUTA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) LARANJA\n");
			printf ("B) MANGA\n");
			printf ("C) QUIABO\n");
			printf ("D) BANANA\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL E O SATELITE NATURAL DA TERRA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) SPUTNICK\n");
			printf ("B) RUBLE\n");
			printf ("C) SOYUS\n");
			printf ("D) LUA\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL DOS ESTADOS ABAIXO NAO POSSUI PRAIAS?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) RIO DE JANEIRO\n");
			printf ("B) CEARA\n");
			printf ("C) GOIAS\n");
			printf ("D) SAO PAULO\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL O SIGNIFICADO DA SILGLA ONU?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) ORGANIZACAO NACIONAL UNICA\n");
			printf ("B) ORDEN NACIONAL UNICA\n");
			printf ("C) ORGANIZACAO DAS NACOES UNIDAS\n");
			printf ("D) NENHUMA DAS ALTERNATIVAS\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("As pergunstas deste nivel terminaram.\n");

		}

