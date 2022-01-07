#include <stdio.h>

int FindingLargest(int Current_Loop_Number_1,int Current_Loop_Number_2)
{
    int SelectedDigit=0;int CurrentLargestNum=0;
    while (Current_Loop_Number_1!=0)
		{
			SelectedDigit=Current_Loop_Number_1%10;
			while (Current_Loop_Number_2!=0)
			{
				if (SelectedDigit<=(Current_Loop_Number_2%10))
				{
					CurrentLargestNum=SelectedDigit;
				}else
				{
					CurrentLargestNum=(Current_Loop_Number_2%10);break;
				}
				Current_Loop_Number_2=Current_Loop_Number_2/10;
			}
			Current_Loop_Number_1=Current_Loop_Number_1/10;
		}
    return CurrentLargestNum;
}
int NoOfTimes(int num,int largest){
    int digit,NoOfTimes=0;
    while(num!=0){
			digit=num%10;
			num=num/10;
			if(digit==largest){
				NoOfTimes++;
			}
		}
    return NoOfTimes;
}
int RemovingDigit(int num,int Digit,int sum,int bin){    
    if (num>0)
    {
        int checkdigit=0;
        checkdigit=num%10;
        if (checkdigit!=Digit)
        {
            sum+=(checkdigit)*bin;
				bin*=10;
        }
        RemovingDigit(num/10,Digit,sum,bin);
    } else{return sum;}
}
int main(void){
    long int num=1;int noof=1;
    int TermNumber;
    int count=1;
    printf("Enter term you want to find: ");
    scanf("%d",&TermNumber);
    while(count<TermNumber){
        int CurrentNumber=num;
        int CurrentLargestNum=0,b=0;
        int New_Number=0,DigitPlacement=1;
            while(CurrentNumber!=0){
                CurrentLargestNum = FindingLargest(CurrentNumber,CurrentNumber);
                New_Number=New_Number+(CurrentLargestNum)*DigitPlacement;
                DigitPlacement=DigitPlacement*10;
                int TotalDigits=NoOfTimes(CurrentNumber,CurrentLargestNum);int digit;
                while (TotalDigits>0)
                {
                    digit=TotalDigits%10;
                    New_Number=New_Number+(digit)*DigitPlacement;
                    DigitPlacement=DigitPlacement*10;
                    TotalDigits=TotalDigits/10;
                }
                CurrentNumber=RemovingDigit(CurrentNumber,CurrentLargestNum,0,1);
            }
        num=New_Number;
        count+=1;
    }
    printf("%dth term is %ld",TermNumber,num);
    printf("\n");
    return 0;
}
