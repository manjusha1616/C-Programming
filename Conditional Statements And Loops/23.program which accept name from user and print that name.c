/*Write a program which accept name from user and print that name.
Input : Piyush Khairnar
Output : Piyush Khairnar*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[30]={'\0'};

    printf("\n Please enter full name \n");
    scanf("%[^\n]",Name);;

    printf("\n Your name is %s \n",Name);

    return 0;
}
