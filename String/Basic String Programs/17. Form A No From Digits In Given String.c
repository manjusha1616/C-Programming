//Form A No From Digits In Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50]={'\0'};
    int i=0,No=0;

    printf("\n Enter A String To Form A Number From Digits In Given String\n\n");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='0' && cSrc[i]<='9')
        {
            No=(No*10)+(cSrc[i]-48);
        }
        i++;
    }

    printf("\n\n Number Formed From Given String Is => %d",No);

    getch();
    return 0;
}
