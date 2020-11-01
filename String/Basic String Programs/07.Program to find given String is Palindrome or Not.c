//Program to find given String is Palindrome or Not

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int i=0,j=0;

    printf("\n Enter The String => ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        i++;
    }
    i--;

    while(j<i)
    {
        if(cSrc[i]!=cSrc[j])
        {
            break;
        }
        i--;
        j++;
    }
    if(i<=j)
    {
        printf("\n\n Given String Is Palindrome");
    }
    else
    {
        printf("\n\n Given String Is Not Palindrome");
    }

    getch();
    return 0;
}
