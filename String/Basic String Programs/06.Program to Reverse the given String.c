//Program to Reverse the given String in main

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    char cDest[20]={'\0'};
    int i=0,j=0;

    printf("Enter The String To Reverse It=>\n");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        i++;
    }

    i--;

    while(i>=0)
    {
        cDest[j]=cSrc[i];
        j++;
        i--;
    }

    printf("\nGiven String is=> %s ",cSrc);
    printf("\nString After Reverse=> %s ",cDest);
    getch();
    return 0;
}
