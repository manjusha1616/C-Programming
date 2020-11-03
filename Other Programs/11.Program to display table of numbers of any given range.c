//Write a program to print table of any given range

#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,sp=0,ep=0;

    printf("\n Enter range as starting point and ending point to print table=>\n");
    scanf("%d%d",&sp,&ep);

    printf("\n======================================================\n\n");

    if(sp<ep)
    {
        for(r=1;r<=10;r++)
        {
            for(c=sp;c<=ep;c++)
            {
                printf(" %d\t",r*c);
            }
            printf("\n");
        }
    }
    else
    {
        for(r=1;r<=10;r++)
        {
            for(c=sp;c>=ep;c--)
            {
                printf(" %d\t",r*c);
            }
            printf("\n");
        }
    }

    printf("\n\n============================================================");

    getch();
    return 0;
}
