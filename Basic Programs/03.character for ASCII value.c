//write a program to find out character for ASCII value

#include<stdio.h>
#include<conio.h>

int main()
{
    int no=0;

    printf("Enter a ASCII value(0-255) \n");
    scanf("%d",&no);

    printf("\n Equivalent character of %d=%c",no,no);

    getch();
    return 0;
}
