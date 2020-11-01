//Special Symbols Count in Given String
#include<stdio.h>
#include<conio.h>

char Sym_Cnt(char*);

int main()
{
    char cSrc[20]={'\0'};

    printf(" Enter A String To Find Special Symbols Count in it\n");
    gets(cSrc);

    Sym_Cnt(cSrc);

    getch();
    return 0;
}

char Sym_Cnt(char *inStr)
{
    int i=0,S_Cnt=0;

     while(inStr[i]!='\0')
    {
        if(!((inStr[i]>='0' && inStr[i]<='9')||(inStr[i]>='A' && inStr[i]<='Z')||(inStr[i]>='a' && inStr[i]<='z')))
        {
            S_Cnt++;
        }
        i++;
    }

    printf("\n Special Symbols Count in Given String is => %d",S_Cnt);

}
