/*Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
Input : “Marvellous Infosystems”
“Logic Building”
Output : “Marvellous Infosystems Logic Building”*/

#include<stdio.h>
#include<conio.h>

void StrCatX(char*,char*);

void StrCatX(char *src, char * dest)
{
    while(*src != '\0') // Traverse first string till end
    {
        *src++;
    }

    while(* dest != '\0') // Copy contents of destination in source
    {
        *src=*dest;
        *dest++;
        *src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[50] = {'\0'};
    char brr[30] = {'\0'};

    printf("\nEnter The String => ");
    gets(arr);

    printf("\nEnter The String => ");
    gets(brr);

    StrCatX(arr,brr);

    printf("\nConcatenated String Is => %s \n",arr); // Marvellous Infosystems Logic Building

    getch();
    return 0;
}
