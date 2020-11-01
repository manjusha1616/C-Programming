//write program for swapping two numbers (without functional approach)

#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0,b=0,temp=0;

    printf("\n Enter the values of a and b \n");
    scanf("%d%d",&a,&b);

    printf("\n\n Before swapping a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\n After swapping a=%d and b=%d",a,b);

    getch();
    return 0;
}
