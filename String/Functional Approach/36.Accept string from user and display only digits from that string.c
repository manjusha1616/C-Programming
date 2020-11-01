/*Write a program which accept string from user and display only digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”*/

#include<stdio.h>
#include<conio.h>

void DisplayDigit(char*);
;
void DisplayDigit(char *str)
{
    int i=0,No=0;

    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            No=(No*10)+(str[i]-48);
        }
        i++;
    }

    printf("\n\n Number Formed From Given String Is => %d",No);
}

int main()
{
    char arr[20];

    printf("\nEnter string => ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    getch();
    return 0;
}
