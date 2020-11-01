//simple string program

#include<stdio.h>
#include<conio.h>

int main()
{
    char cArr[50]={'\0'};

    printf("\n Enter The String \n");
    gets(cArr);                               //scanf("%[^\n]",cArr);

    printf("\n Entered String is = ");
    puts(cArr);                                //printf("\n Entered String is =%s ",cArr);

    getch();
    return 0;
}
