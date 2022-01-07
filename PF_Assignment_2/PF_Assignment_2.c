// Zuraiz Zahoor Ajaz      i19-1793    AI-K    Assignment #2   Due:11-Sep-2019
//**Please enlarge terminal for a better view of program**

#include <stdio.h>

void Roof()
{
	//THIS PROGRAM WILL PRINT ROOF OF FAST

	printf("                         !\n");
	printf("                       (***)\n");
	printf("                      |0|0|0|\n");
	printf("   /\\________________---------_________________/\\\n");
}

void MainBuilding(char w)
{
	//THIS PROGRAM WILL PRINT MAIN BUILDING OF FAST

	printf("  | || %c %c %c %c || %c || %c %c %c  || %c || %c %c %c %c || |\n",w,w,w,w,w,w,w,w,w,w,w,w,w);
	printf("  ==================== ______ ====================\n");
	printf("  | || %c %c %c %c || %c || |    | || %c || %c %c %c %c || |  \n",w,w,w,w,w,w,w,w,w,w);
	printf("  | || %c %c %c %c || %c || |    | || %c || %c %c %c %c || |  \n",w,w,w,w,w,w,w,w,w,w);
	printf("  | || %c %c %c %c || %c ||_|____|_|| %c || %c %c %c %c || |  \n",w,w,w,w,w,w,w,w,w,w);
}

void Lawn(char g)
{
	//THIS PROGRAM WILL PRINT LAWN OF FAST

	printf(" /                   /   __   \\                   \\\n");
	printf("/    %c %c %c %c        /   /__\\   \\        %c %c %c %c    \\\n",g,g,g,g,g,g,g,g);
}

int main()
{
	//variables :

		char window,grass;

	//program details

		printf("\n");
		printf("This program will draw FAST-ISB building with ACSII characters\n");
		printf("\n");

	//Input from user for window and grass

		printf("Enter character for windows and grass : ");
		scanf("%c%c",&window,&grass);

	//Calling Funtions now

		Roof();
		MainBuilding(window);
		Lawn(grass);

return 0;
}
