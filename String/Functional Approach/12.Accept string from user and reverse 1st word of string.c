/*Write program to accept string from user and reverse 1st word of string.
I/P => ABCD EFGH LM
O/P => DCBA EFGH LM */
#include<stdio.h>
#include<conio.h>

void string_imples(char*);

int main()
{
    char cSrc[20]="";

    printf("\n Enter A String To reverse Every Word Of String Imples\n\n");
    gets(cSrc);

    string_imples(cSrc);

    printf("\n\n After Reversing Each Word String Is => %s",cSrc);

    getch();
    return 0;
}

void string_imples(char *inStr)
{
    int i=0;
    char *p1=NULL;
    char *p2=NULL;

    while(inStr[i]!='\0')
    {
            if(inStr[i]==' ' || inStr[i]==',' || inStr[i]=='.')
            {
                i++;
                continue;
            }

            p1 = inStr + i;

            while(inStr[i]!=' ' && inStr[i]!='\0' && inStr[i]!=',' && inStr[i]!='.')
            {
                i++;
            }

            p2 = (inStr + i) - 1;

            while(p1<p2)
            {
                char ch=*p1;
                *p1=*p2;
                *p2=ch;

                p1++;
                p2--;
            }
            break;
    }
    return;
}
