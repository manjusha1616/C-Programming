//Function Like Macro In C - Arithmatic Operators
#include<stdio.h>
#include<conio.h>

#define Add(N1 ,N2) N1+N2
#define Mod(N1, N2) N1%N2
#define Div(N1, N2) N1/N2

int main()
{
    int No1=0, No2=0, Sum=0;

    printf("\n Enter Two Numbers \n");
    scanf("%d%d",&No1,&No2);

    Sum = Add(No1, No2);

    printf("\n Addition Of %d And %d => %d\n",No1,No2,Sum);

    getch();

    printf("\n Remainder Of 71 And 7 => %d\n",Mod(71, 7));

    getch();

    printf("\n Division Of 71 And 7 => %d\n",Div(71, 7));

    getch();
    return 0;
}
