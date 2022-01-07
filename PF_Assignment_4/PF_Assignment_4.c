#include <stdio.h>

/*Pascal Function is going to return a value at a particular row and column(position) of Pascal Triangle*/
int pascal(int row,int col)
{
    if (row ==1 || col == 1 || col == row)
    {
        return 1;
    }else
    {
        return pascal(row-1,col-1)+pascal(row-1,col);
    }   
}
/*This function prints number of blanks behind each row of Pascal Triangle. As each row requires different 
 blanks so different values are sent as parameter to this function*/
void StartingBlanks(int TSpaces)
{
    if (TSpaces==0){
        return;
    }else
    {
        printf(" ");
        StartingBlanks(TSpaces-1);
    }
}
/*This function handles the required spaces between different numbers of Pascal Triangle. It also calls 
pascal function at each cycle of its recursive period.*/
void DisplayNum(int CurrentRow,int CurrentColumn,int TotalNoOfRows){
    if (CurrentColumn<CurrentRow){
        if (CurrentRow>13)/*As rows bigger than 13 have to be dealt differently*/
        {
            if (CurrentColumn==1){
                printf("  %d ",pascal(CurrentRow,CurrentColumn));
            }else{
                printf("%5d ",pascal(CurrentRow,CurrentColumn));
            }            
        }else
        {
            printf("%3d   ",pascal(CurrentRow,CurrentColumn));
        }   
        ++CurrentColumn;
        DisplayNum(CurrentRow,CurrentColumn,TotalNoOfRows);
    }else if (CurrentColumn==CurrentRow)
    {
        if (CurrentRow>13)/*As rows bigger than 13 have to be dealt differently*/
        {
            printf("    %d",pascal(CurrentRow,CurrentColumn));
        }
        else{
        printf("  %d",pascal(CurrentRow,CurrentColumn));
        }
    }else  
    {
        return;
    }
}
/*This function builds the triangle by calling the DisplayNum function and StartingBlanks for a perfect 
pascal triangle.*/
void PrintTriangle(int TotalNoOfRows , int CurrentRow)
{
     int CurrentColumn = 1 , NoOfSpaces;
     if (CurrentRow <= TotalNoOfRows){
        NoOfSpaces = (TotalNoOfRows-CurrentRow)*3;
        if (NoOfSpaces > 0){
            StartingBlanks(NoOfSpaces);
        }
        DisplayNum(CurrentRow,CurrentColumn,TotalNoOfRows);   
        ++CurrentRow;
        printf("\n");
        PrintTriangle(TotalNoOfRows,CurrentRow);
    }else
    {
        return;
    }
}
int main(void)
{
    int TotalNoOfRows=0,CurrentRow=1;
    printf("Enter the number of rows in Pascal's Triangle: ");
    scanf("%d",&TotalNoOfRows);
    PrintTriangle(TotalNoOfRows,CurrentRow);
}
