//Digit Count in Given String
#include<stdio.h>
#include<conio.h>

void Dig_Cnt(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf(" Enter A String To Find Digit Count in it\n");
    gets(cSrc);

    Dig_Cnt(cSrc);

    getch();
    return 0;
}

void Dig_Cnt(char *inStr)
{
    int i=0,D_Cnt=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]>='0' && inStr[i]<='9')         //if(inStr[i]>='48' && inStr[i]<='57')
        {
            D_Cnt++;
        }
        i++;
    }

    printf("\n Digit Count in Given String is => %d",D_Cnt);

}



