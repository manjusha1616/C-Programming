/*Write a recursive program which accept number from user and return its product of digits.
Input : 523
Output : 30*/

#include<stdio.h>
#include<conio.h>

int Mult(int);

int Mult(int iNo)
{
    static int product=1,Temp=0;

    product=product*(iNo%10);
    Temp=iNo/10;

    if(Temp>0)
    {
        Mult(Temp);
    }
    return product;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\nEnter number=> ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("\nProduct of digits of Given Number => %d \n",iRet);

    getch();
    return 0;
}
