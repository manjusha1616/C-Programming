//Program To Find String Length

#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0;
    char cSrc[50]={'\0'};

    printf("\nEnter a String To Find Its Length => ");
    gets(cSrc);

    for(i=0;cSrc[i]!='\0';i++)
    {
        while(cSrc[i]!='\0')
        {
            break;
        }
    }

    printf("\nThe Length Of Entered String is => %d",i);

    getch();
    return 0;
}
