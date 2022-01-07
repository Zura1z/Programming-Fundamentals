//Name:Zuraiz Zahoor Ajaz    Roll No:i19-1793     Section:AI-K
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>



/************************** To output negative characters *******************************/
void NotifyTrapped(char ch){
    printf("\nThe letter %c got trapped!\n",ch);
}
/******************************** To output directions **********************************/

int GetDirection(int a,int b){
    int Rdirection=a;
    while (Rdirection==a || Rdirection == b)
    {
        Rdirection=((rand() % 4));
    }
    return Rdirection;
}

int main(int argc, char *argv[]){
    
    int MAX_ROW = atoi(argv[1]),MAX_COL=atoi(argv[2]);
    char game[MAX_ROW][MAX_COL];
    bool isTrapped=false;
    char trappedchar;

    for (int i = 0; i < MAX_ROW; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {
            game[i][j]='.';
        }
    }
    srand((unsigned) time(NULL));
    int row=rand() % MAX_ROW;
    int col=rand() % MAX_COL;

    game[row][col]='A';

    int direction=0;
    direction = ((rand() % 4));

    for (int j = 'B'; j <= 'Z'; j++)
    {
        /******************************************************************************************************/
        /*                                To move in direction with no character                              */
        /******************************************************************************************************/
        if ((col==MAX_COL-1) && (row==MAX_ROW-1) && (direction==2 || direction==3 ))
        {
                direction = GetDirection(2,3);
                j--;continue;
        }
        else if ((col==0) && (row==0) && (direction==0 || direction==1 ))
        {
            direction = GetDirection(0,1);
            j--;continue;
        }
        else if ((col==0) && (row==MAX_ROW-1)&& (direction==0 || direction==3 ))
        {
            direction = GetDirection(0,3);
            j--;continue;
        }
        else if ((col==MAX_COL-1) && (row==0)&& (direction==1 || direction==2 ))
        {
            direction = GetDirection(1,2);
            j--;continue;
        }
        /******************************************************************************************************/
        /*                                    To handle trapped characters                                    */
        /******************************************************************************************************/
        if((isalpha(game[row][col-1])) && (isalpha(game[row][col+1])) && (isalpha(game[row-1][col])) && (isalpha(game[row+1][col]) )){
            isTrapped=true;
            trappedchar=j-1;
            break;
            
        }

        //For corners
        if( col==0 && row == 0 && (isalpha(game[row][col+1]) ) && (isalpha(game[row+1][col]) )){
            isTrapped=true;
            trappedchar=j-1;
            break;  
        }
        if(col==(MAX_COL-1) && row==0  &&(isalpha(game[row][col-1]) ) &&  (isalpha(game[row+1][col]) )){
            isTrapped=true;
            trappedchar=j-1;
            break;  
        }
        if( row==(MAX_ROW-1) && col==0 && (isalpha(game[row][col+1])) && (isalpha(game[row-1][col]) )){
            isTrapped=true;
            trappedchar=j-1;
            break;  
        }
        if((isalpha(game[row][col-1]) )  && (isalpha(game[row-1][col]) ) && row==(MAX_ROW-1) && col==(MAX_COL-1)){
            isTrapped=true;
            trappedchar=j-1;
            break;  
        }
        //For characters in last row or column
        if( row == 0 && (isalpha(game[row][col+1]) ) && (isalpha(game[row][col-1]) ) && (isalpha(game[row+1][col]) )){
            isTrapped=true;
            trappedchar=j-1;
            break;  
        }
        if(col==(MAX_COL-1)  &&(isalpha(game[row][col-1]) ) &&  (isalpha(game[row-1][col]) )&&  (isalpha(game[row+1][col]) )){
            isTrapped=true;
            trappedchar=j-1;
            break;  
        }
        if(  col==0 && (isalpha(game[row][col+1])) && (isalpha(game[row+1][col]) )&& (isalpha(game[row-1][col]) )){
            isTrapped=true;
            trappedchar=j-1;
            break;  
        }
        if((isalpha(game[row][col+1]))   &&(isalpha(game[row][col-1]) )  && (isalpha(game[row-1][col]) ) && row==(MAX_ROW-1)){
            isTrapped=true;
            trappedchar=j-1;
            break;  
        }
        if((direction==0 && col<0) || (direction==1 && row<0) || (direction==2 && col==MAX_COL) || (direction==3 && row==MAX_ROW)){
            direction = ((rand() % 4));
            j--;
            continue;
        }
        /******************************************************************************************************/
        /******************************************************************************************************/
        /******************************************************************************************************/

        /******************************************************************************************************/
        /*                                    To move characters in directions                                */
        /******************************************************************************************************/
       if(direction==0 ){
           if (!(isalpha(game[row][col-1])) && (((col-1)>=0)  ))
           {
                game[row][col-1]=j;
                col-=1;
           }else
           {
                direction = GetDirection(0,-1);
                j--;continue;
           }
        }else if (direction==1  )
        {
            if (!(isalpha(game[row-1][col])) && (((row-1)>=0) ))
           {
                game[row-1][col]=j;
                row-=1;
           }else
           {
                direction = GetDirection(1,-1);
                j--;continue;
           }
        } else if(direction==2 ) {
            if (!(isalpha(game[row][col+1]))  && ((col+1)<MAX_COL) ) 
           {
                game[row][col+1]=j;
                col+=1;
           }else
           {
                direction = GetDirection(2,-1);
                j--;continue;
           }     
        }else if (direction==3  )
        {
            if (!(isalpha(game[row+1][col])) && ((row+1)<MAX_ROW) )
           {
                game[row+1][col]=j;
                row+=1;
           }else
           {
                direction = GetDirection(3,-1);
                j--;continue;
           }    
        }
        /******************************************************************************************************/
        direction = ((rand() % 4));
    
    }
    /*                                         To output character array                                      */
    printf("\n");
    for (int i = 0; i < MAX_ROW; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        {
            printf("%c",game[i][j]);
        }
        printf("\n");
    }
    /***********************************************************************************************************/
    /*                                         To output trapped characters                                     */
    if (isTrapped)
    {
        NotifyTrapped(trappedchar);
    }else
    {
        printf("\nCompleted 'A' through 'Z'\n");
    }
    /***********************************************************************************************************/
    return 0;
}
