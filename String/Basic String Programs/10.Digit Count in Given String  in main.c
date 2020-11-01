//Digit Count in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int i=0,D_Cnt=0;

    printf(" Enter A String To Find Digit Count in it\n");
    gets(cSrc);

     while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='0' && cSrc[i]<='9')         //if(cSrc[i]>='48' && cSrc[i]<='57')
        {
            D_Cnt++;
        }
        i++;
    }

    printf("\n Digit Count in Given String is => %d",D_Cnt);

    getch();
    return 0;
}




