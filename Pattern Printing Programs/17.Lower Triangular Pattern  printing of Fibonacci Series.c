//Lower Triangular Pattern  printing of Fibonacci Series

#include<stdio.h>
#include<conio.h>

int main()
{
    int temp=0,cnt=0,no1=0,no2=1,no3=0,x=0,i=0,j=0;

     printf("\n Enter a value for Lower Triangular Pattern => \n");
     scanf("%d",&x);
     lbl:

    printf("\nEnter a count for Fibonacci series=>\n");
    scanf("%d",&cnt);

    for(temp=1;temp<=cnt;++i)
    {
        for(i=1;i<=x;i++)
        {
            for(j=1;j<=x;j++)
            {
                if(i>=j)
                {
                    printf(" %d",no1);
                    no3=no1+no2;
                    no1=no2;
                    no2=no3;
                    temp++;
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n\n");
        }
    }
}

