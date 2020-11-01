//Vowels Count in Given String
#include<stdio.h>
#include<conio.h>

void Vow_Count(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf(" Enter A String To Find Vowels Count in it\n");
    gets(cSrc);

    Vow_Count(cSrc);

    getch();
    return 0;
}

void Vow_Count(char *inStr)
{
    int i=0, V_Cnt=0;

    while(inStr[i]!='\0')
    {
        if(inStr[i]=='A'||inStr[i]=='E'||inStr[i]=='I'||inStr[i]=='O'||inStr[i]=='U'||inStr[i]=='a'||inStr[i]=='e'||inStr[i]=='i'||inStr[i]=='o'||inStr[i]=='u')
        {
            V_Cnt++;
        }
        i++;
    }

     printf("\n Vowels Count in Given String is => %d",V_Cnt);
}



