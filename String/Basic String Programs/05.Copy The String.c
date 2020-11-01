//Program To Copy The String To Another String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50]={'\0'};
    char cDest[50]={'\0'};
    int i=0;

    printf("\nEnter a String => ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        cDest[i]=cSrc[i];
        i++;
    }

    printf("\nThe Entered String is => %s \n",cSrc);
    printf("\nThe Copied String is => %s \n",cDest);
}
