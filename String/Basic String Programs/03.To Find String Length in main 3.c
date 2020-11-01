//Program To Find String Length
#include<stdio.h>
#include<conio.h>
int main()
{
    int Len=0;
    char cSrc[50]={'\0'};

    printf("\nEnter a String To Find Its Length => ");
    gets(cSrc);

    for(Len=0;cSrc[Len]!='\0';Len++);

    printf("\nThe Length Of Entered String is => %d",Len);

    getch();
    return 0;
}

