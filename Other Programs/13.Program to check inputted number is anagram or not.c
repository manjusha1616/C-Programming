/*Write Program to check inputted number is anagram or not.
(Anagram = digits used for creating number are same).
I/P => 1) 265462305 O/P=> yes given number is anagram number
2) 465362502*/

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool Anagram_No(long int , long int);

int No_Len(long int);

int main()
{
    long int No1=0,No2=0;

    printf(" Enter Two Numbers To Check Whether It Is Anagram Or Not \n");
    scanf("%d%d",&No1,&No2);

    if(Anagram_No(No1,No2))
    {
        printf(" Entered Numbers Are Anagram Numbers \n");
    }
    else
    {
        printf(" Entered Numbers Are Not Anagram Numbers \n");
    }
    getch();
    return 0;
}

bool Anagram_No(long int N1,long int N2)
{
    bool bRet = false;
    int i=0,Arr1[10]={0},Arr2[10]={0};

    if(No_Len(N1)!=No_Len(N2))
    {
        return false;
    }

    while(N1>0)
    {
        Arr1[N1%10]++;
        N1=N1/10;
        Arr2[N2%10]++;
        N2=N2/10;
    }

    for(i=0;i<=9;i++)
    {
        if(Arr1[i]!=Arr2[i])
        {
            bRet=false;
            break;
        }
        bRet=true;
    }
    return bRet;
}

int No_Len(long int No)
{
    int i=0;

    while(No>0)
    {
        No=No/10;
        i++;
    }
    return i;
}
