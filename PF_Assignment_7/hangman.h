#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NANBIYA	26
#define NSURAHS	114
#define NSAHABA 306
#define MAXLEN	50

char anbiya[NANBIYA][MAXLEN];
char surahs[NSURAHS][MAXLEN];
char sahaba[NSAHABA][MAXLEN];

void showHangman(int choice)                            /**This function displays the hangman after each wrong try**/
{
     switch(choice)
     {
     	case 0: printf("\n\t|----- \n\t|    | \n\t|    O \n\t|      \n\t|      \n\t|      \n"); break;
        case 1: printf("\n\t|----- \n\t|    | \n\t|   \\O/\n\t|      \n\t|      \n\t|      \n"); break;
     	case 2: printf("\n\t|----- \n\t|    | \n\t|   \\O/\n\t|    | \n\t|      \n\t|      \n"); break;
     	case 3: printf("\n\t|----- \n\t|    | \n\t|   \\O/\n\t|    | \n\t|     \\\n\t|      \n"); break;
     	case 4:	printf("\n\t|----- \n\t|    | \n\t|   \\O/\n\t|    | \n\t|   / \\\n\t|      \n"); break;
     }
}

void initializeRandom() 
{
	srand( time(0) );
}

int getRandom(int max) {
	return rand() % max;		
}

const char * getGenre(int t) {
    if (t==0)	   return "Nabi";
    else if (t==1) return "Surah";
    else 		   return "Sahabi";
}

const char * getPhrase(int t) {
	if (t==0) 	   return anbiya[ getRandom(NANBIYA) ]; 
	else if (t==1) return surahs[ getRandom(NSURAHS) ];
	else 		   return sahaba[ getRandom(NSAHABA) ];
}

void loadPhraseBank() {
	int i=0,j=0;
	char c;
	FILE *file;
	file = fopen("Sahaba.txt", "r");
	if (file) {
		while ((c = getc(file)) != EOF) {
			if (c == '\n') {sahaba[i++][j] = '\0'; j = 0;}
		    else sahaba[i][j++] = c;
		}
		fclose(file);
	}
	file = fopen("Anbiya.txt", "r");
	if (file) {
		i = 0, j = 0;
		while ((c = getc(file)) != EOF) {
			if (c == '\n') {anbiya[i++][j]='\0'; j = 0;}
		    else anbiya[i][j++] = c;
		}
		fclose(file);
	}
	file = fopen("Surahs.txt", "r");
	if (file) {
		i = 0, j = 0;
		while ((c = getc(file)) != EOF) {
			if (c == '\n') {surahs[i++][j]='\0'; j = 0;}
		    else surahs[i][j++] = c;
		}
		fclose(file);
	}
}

void init() {
	initializeRandom();
	loadPhraseBank();
}
