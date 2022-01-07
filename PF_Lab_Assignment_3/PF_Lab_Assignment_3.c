#include <stdio.h>


int main(void){
    char array[1000]={0};int i=0;
    char dup1a[1000]={0};int w=0;
    printf("Enter the statement: ");
    while ((array[i]=getchar())!='\n')
    {
        i++;
    }
    array[i+1]=' ';
    for (int y = 0; array[y]!='\0'; y++)
    {
        if (array[y]>='A'&&array[y]<='Z')
        {
            array[y]=array[y]+32;
        }
        
    }
    printf("%s\n",array);
    
    array[i]='\0';
    int q=0;int copy=0;
    for (int j = 0; array[q]!='\0' || array[q]!=0; j++)
    {   
        copy=j;
        
        
        if (array[q]=='.' || array[q]==',' || array[q]==';'|| array[q]=='!'|| array[q]=='?')
        {
            if (array[q-1]!=' ')
            {
                q--;
            }
            
            q+=2;dup1a[j]=array[q];q++;continue;
        }
        if (array[q]=='t' && array[q+1]=='h'&& array[q+2]=='e' && array[q-1]==' '  && array[q+3]==' ' )
        {
            q+=4;dup1a[j]=array[q];q++;continue;  //dup1a[j]=array[q];
        }
        if (array[q]=='a' && array[q+1]=='n'&& array[q+2]=='d'&& array[q-1]==' ' && array[q+2]==' ' )
        {
            q+=4;dup1a[j]=array[q];q++;continue;  //dup1a[j]=array[q];/*q++;continue;*/
        }
          if (((array[q]=='i' && array[q+1]=='s') || (array[q]=='i' && array[q+1]=='n') || (array[q]=='a' && array[q+1]=='m')) && array[q-1]==' ' && array[q+2]==' ')
        {
            q+=3;dup1a[j]=array[q];q++;continue;
        }
        if (array[q]=='a' && array[q+1]=='n' && array[q-1]==' ' && array[q+2]==' ')
        {
            q+=3;dup1a[j]=array[q];q++;continue;
        }
        if (array[q]=='o' && array[q-1]==' '&& array[q+1]=='f' && array[q+2]==' ')
        {
            q+=3;  dup1a[j]=array[q];q++;continue;
        }
        
        if ((array[q]=='i' || array[q]=='a' )  && (array[q-1]==' ' || q==0) && array[q+1]==' ')
        {
            q+=2;dup1a[j]=array[q];q++;continue;
        }
        if ((array[q]=='i' || array[q]=='a' )  && q==0 && array[q+1]==' ')
        {
            q+=2;dup1a[j]=array[q];q++;continue;
        }
      
        dup1a[j]=array[q];
        q++;
        //printf(".");
        //printf("%c",dup1a[j]);
        
    }
    dup1a[copy+1]=' ';
    printf("%s\n",dup1a);char t;char lop='f';
    
    for (int k = 0; dup1a[k]!='\0'; k++)
    {
        char dup2a[100]={0};int count=0,length=0;
        for (int i = 0; (t=dup1a[i])!=' ' && (dup1a[i]!=0)/* &&(dup1a[i])!='\0'*/; i++)
        {
            dup2a[i]=t;
            length++;
        }
        //printf("%s %d\n",dup2a,length);
        
        int r=0;
        int wordcount=0;
        for (int pq = 0; /*(t=dup1a[pq])!=0 ||*/ (t=dup1a[pq])!='\0' &&(length!=1) ; pq++)
        {
           if (dup2a[r]==t && r<=length)
            {   
                r++;
                lop = 't';
                if (r==length)
                {
                    int toto=1;int s=0;
                    for (int u = pq-length; dup1a[length+u+2]!='\0' ||dup1a[length+u+1]!=0 ; u++)
                    {   
                        dup1a[u]=dup1a[length+u+1];
                        s=u;
                    }
                    pq=pq+length+1;
                    dup1a[s+1]='\0'; //printf("--%c--",dup1a[s]);           
                    wordcount++;
                    r=0;
                }
            }        
        }        
        if (length!=1 && dup2a[0]!=' '){
        printf("%s -- %d\n",dup2a,wordcount);}
        //printf("%s\n",dup1a);
        //printf("\n%s\n",dup1a);

    }
    
    //for (int j = 0; dup1a[j]!='\0';/*array[j]!='\n'*/j++)
    //{
    //    printf("%c",array[j]);
    //printf("%c\n",dup1a[j]);
    //}
    

    return 0 ;
}
