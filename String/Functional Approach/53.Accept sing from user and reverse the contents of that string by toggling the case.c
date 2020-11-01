/*Accept sing from user and reverse the contents of that string by toggling the case.
Input : “aCBdef”
Output : “FEDcbA”*/

#include<stdio.h>
#include<conio.h>

void StrRevTogX(char*);

void StrRevTogX(char *str)
{
    char temp;
    char *first,*last;
    int i=0;

    while(str[i] !='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }

    first = str;
    last = str;

    while(*last !='\0')
    {
        last++;
    }
    last--;
    while(first <= last)
    {
        temp=*first;
        *first=*last;
        *last=temp;
        *first++;
        *last--;
    }
}

int main()
{
    char arr[50] ={'\0'};

    printf("\nEnter The String => ");
    gets(arr);

    StrRevTogX(arr);

    printf("\n%s ",arr); // SUOLLEVRAm

    getch();
    return 0;
}
