#include <stdio.h>
//#include "p3.c"
//*******COMMON FUNCTIONS*********//
void Space(int n){
    if (n>0)
    {
        printf(" ");
        Space(n-1);
    }else
    {
        return;
    }
}
void Underscore(int n){
    if (n>0)
    {
        printf("_");
        Underscore(n-1);
    }else
    {
        return;
    }
}
void EqualSign(int n){
    if (n>0)
    {
        printf("=");
        EqualSign(n-1);
    }else
    {
        return;
    }   
}
void printstars(int n){
    if (n>0)
    {
        printf("* ");
        printstars(n-1);
    }else
    {
        return;
    }  
}
//*******************************//

//********Main FUNCTIONS*********//
void Divider(int n){
    if ((n%2)!=0)
    {
        n++;
    }
    
    if (n<4)
    {
        Space(7);
        printf(" _____ ");
    }
    else if (n==4)
    {
        Space(2);
        EqualSign(4);
        printf(" _____ ");
        EqualSign(4);
    }else if (n==6)
    {
        Space(2);
        EqualSign(9);
        printf(" _____ ");
        EqualSign(9);
    }else
    {
        Space(2);
        EqualSign((n*2)-(n-8+2));
        printf(" _____ ");
        EqualSign((n*2)-(n-8+2));
    }
    printf("\n");
}
void Minaar(int n){
    if (n==4)
    {
        Space(9);
        printf("!\n");
        Space(7);
        printf("(***)\n");
        Space(6);
        printf("|O|O|O|\n");
        printf("   /\\");
        printf("---------");
        printf("/\\\n");
    }else if(n==6)
    {
        Space(n-1+9);
        printf("!\n");
        Space(n-1+7);
        printf("(***)\n");
        Space(n-1+6);
        printf("|O|O|O|\n");
        printf("   /\\");
        Underscore(n-1);
        printf("---------");
        Underscore(n-1);
        printf("/\\\n");
    }else
    {
        Space(n+2+9);
        printf("!\n");
        Space(n+2+7);
        printf("(***)\n");
        Space(n+2+6);
        printf("|O|O|O|\n");
        printf("   /\\");
        Underscore(n+2);
        printf("---------");
        Underscore(n+2);
        printf("/\\\n");
    }    
}
//********Upper Building FUNCTIONS*********//
void mid2(int w){
	if (w!=6)
	{
		printf("|| O");
	}else
	{
		printf("O");
	}
}
void mid3(int w){
	if (w!=6)
	{
		printf(" O || ");
	}else
	{
		printf(" O ");
	}
}
void PrintZeros(int NoOfZeros){
	if (NoOfZeros>0)
	{
		printf("O ");
		PrintZeros(NoOfZeros-1);
	}else
	{
		return;
	}
}
void UpperBuilding(int WidthOfBuilding , int NoOfFloors){
	if (NoOfFloors>0 && WidthOfBuilding>3)
	{
		while (NoOfFloors>0 )
		{
			printf("  | || ");
			if (WidthOfBuilding>4)
			{
				PrintZeros((WidthOfBuilding-5)/2);
				mid2(WidthOfBuilding);
				printf(" || O O O ||");	
				mid3(WidthOfBuilding);
				PrintZeros((WidthOfBuilding-5)/2);
				
			}else if (WidthOfBuilding==4)
			{
				printf("O O O ");
			}else
			{
				printf(" || O O O ||");
			}
			printf("|| |\n");
			--NoOfFloors;
		}	
	}
}
//*****************************************//
//************Grass FUNCTIONS*************//
void grass(int Width){
    if (Width<=4)
    {
        printf(" /   /  ___  \\   \\\n");
        printf("/ * /  /___\\  \\ * \\\n");
    }else if (Width==6)
    {
        printf(" /        /  ___  \\        \\\n");
        printf("/ * * * */  /___\\  \\ * * * *\\\n");
    }else
    {
    printf(" / ");
    Space(Width+4);
    printf("/  ___  \\");
    Space(Width+5);
    printf("\\\n");
    printf("/ ");
    printstars((Width/2)+2);
    printf("/  /___\\  \\ ");
    printstars((Width/2)+2);
    printf("\\\n");
    }
}
//*****************************************//
//************TANKS FUNCTIONS**************//
void Tanks(int width){
    if (width==4)
    {
        Space(2);printf("______");Space(3);printf("______\n");
        Space(2);printf("|    |");Space(3);printf("|    |\n");
        Space(2);printf("|    |");printf("___");printf("|    |\n");
    }else if(width==6){
        Space(2);printf("______");Space(13);printf("______\n");
        Space(2);printf("|    |");Space(13);printf("|    |\n");
        Space(2);printf("|    |");Underscore(13);printf("|    |\n");
    }
    else if(width>6){
        Space(2);printf("______");Space(((width-8)*2)+23);printf("______\n");
        Space(2);printf("|    |");Space(((width-8)*2)+23);printf("|    |\n");
        Space(2);printf("|    |");Underscore(((width-8)*2)+23);
        printf("|    |\n");
    }
}    
//*****************************************//
//********LOWER Building FUNCTIONS*********//
void LeftSide(int NoOfLeftWindows){
    if (NoOfLeftWindows>0){
    	printf(" O");
		LeftSide(NoOfLeftWindows-1);
    }else
	{
		return;
	}
}
void RightSide(int NoOfRightWindows){
	if (NoOfRightWindows>0){
    	printf(" O");
		RightSide(NoOfRightWindows-1);
    }else
	{
		return;
	}
}
void LineSides(int NoOfWindows){
		printf("  | ||");
		LeftSide(NoOfWindows);
		printf(" || O ||");
}
void LowerBuilding(int Floors,int Width,char CheckChar,int count){
    if (Width<=4)
    {
        if (Floors==2)
        {
            printf("       _____     \n");
            printf("  ____ |   | ____\n");
            printf("  | || |   | || |\n");
            printf("  | || |___| || |\n");
        }else if (Floors==1)
        {
            printf("       _____     \n");
            printf("       |   |     \n");
            printf("  ____ |   | ____\n");
            printf("  | || |___| || |\n");
        }else if (Floors==0)
        {
            printf("       _____     \n");
            printf("       |   |     \n");
            printf("       |   |     \n");
            printf("  ____ |___| ____\n");        
        }else{
        printf("  | || |   | || |\n");
        printf("  | || |   | || |\n");
        printf("  | || |___| || |\n");
        }
    }else if (Width==6)
    {
        if (Floors==2)

        {
            printf("            _____           \n");
            printf("  _________ |   | _________\n");
            printf("  | || O || |   | || O || |\n");
            printf("  | || O || |___| || O || |\n");
        }else if (Floors==1)
        {
            printf("            _____          \n");
            printf("            |   |          \n");
            printf("  _________ |   | _________\n");
            printf("  | || O || |___| || O || |\n");
        }else
        {
        printf("  | || O || |   | || O || |\n");
        printf("  | || O || |   | || O || |\n");
        printf("  | || O || |___| || O || |\n");
        }
    }else 
	if (Floors>0 ){
        if (CheckChar=='p')
        {
            if (Floors==2)
            {
                Space(Width+7);printf("  _____  ");
                printf("\n");
                Space(2);Underscore(Width+6);printf(" |   | ");Underscore(Width+6);
                count=4;
                printf("\n");   
            }else if (Floors==1)
            {
                Space(Width+7);printf("  _____  ");
                printf("\n");
                Space(Width+7);printf("  |   |  ");
                printf("\n");
                Space(2);Underscore(Width+6);printf(" |   | ");Underscore(Width+6);
                count=3;
                printf("\n");
            }  
        }
        CheckChar = 'c';
        LineSides((Width/2)-3);
        if (count<3)
        {
            printf(" |   | ");count++;
        }else if (count==4)
        {
            printf(" |   | ");count--;
        }else{
        	  printf(" |___| ");
        }
        printf("|| O ||");RightSide((Width/2)-3);printf(" || |");
        printf("\n");
        LowerBuilding(Floors-1,Width,CheckChar,count);
        }    
	else if (Floors==0 && count==1)
        {
        Space(Width+9);printf("_____");Space(Width+7);printf("\n");
        Space(Width+9);printf("|   |");Space(Width+7);printf("\n");
        Space(Width+9);printf("|   |");Space(Width+7);printf("\n");
        Space(2);Underscore(Width+6);printf(" |___| ");Underscore(Width+6);
        printf("\n");
    }
	{
		return;
	}	
}
//*****************************************//
//****************************************//
int main(){
    
    int NoOfFloors=0 , WidthOfBuilding = 0;
    printf("FAST Main Building in ASCII Art\n");    
    printf("Enter number of floors: ");
    scanf("%d",&NoOfFloors);
    printf("Enter width of building: ");
    scanf("%d",&WidthOfBuilding);
    if ((WidthOfBuilding%2)!=0)
    {
        WidthOfBuilding++;
    }
    if (NoOfFloors>2 && WidthOfBuilding>2 )
    {
        if (NoOfFloors<=7){
            Minaar(WidthOfBuilding);
            UpperBuilding(WidthOfBuilding,NoOfFloors-3);
            Divider(WidthOfBuilding);
            LowerBuilding(3,WidthOfBuilding,'p',1);
            grass(WidthOfBuilding);
        }else
        {
            Tanks(WidthOfBuilding);
            UpperBuilding(WidthOfBuilding,NoOfFloors-3);
            Divider(WidthOfBuilding);
            LowerBuilding(3,WidthOfBuilding,'p',1);
            grass(WidthOfBuilding);
        }
    }else if (NoOfFloors==2 && WidthOfBuilding>2)
    {
        LowerBuilding(2,WidthOfBuilding,'p',1);
        grass(WidthOfBuilding);
    }else if(NoOfFloors==1 && WidthOfBuilding>2)
    {
        LowerBuilding(1,WidthOfBuilding,'p',1);
        grass(WidthOfBuilding);
    }else if (NoOfFloors>-1)
    {
        LowerBuilding(0,WidthOfBuilding,'p',1);
        grass(WidthOfBuilding);
    }else
    {
        LowerBuilding(0,4,'p',1);
        grass(0);
    }
}
