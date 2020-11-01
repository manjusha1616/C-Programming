//Vowels Count in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char csrc[20]={'\0'};
    int i=0, V_Cnt=0;


    printf(" Enter A String To Find Vowels Count in it\n");
    gets(csrc);

    while(csrc[i]!='\0')
    {
        if(csrc[i]=='A'||csrc[i]=='E'||csrc[i]=='I'||csrc[i]=='O'||csrc[i]=='U'||csrc[i]=='a'||csrc[i]=='e'||csrc[i]=='i'||csrc[i]=='o'||csrc[i]=='u')
        {
            V_Cnt++;
        }
        i++;
    }

    printf("\n Vowels Count in Given String is => %d",V_Cnt);

    getch();
    return 0;
}



