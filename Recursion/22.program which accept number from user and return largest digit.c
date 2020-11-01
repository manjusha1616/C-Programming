/*Write a recursive program which accept number from user and return largest digit
Input : 87983
Output : 9*/

#include<stdio.h>
#include<conio.h>

int Max(int);

int Max(int iNo)
{
   static int max=0;

    if(iNo!=0)
    {
        if(iNo%10>max)
        {
            max=iNo%10;
        }
        return Max(iNo/10);
    }
    return max;
}
int main()
{
    int no=0;

    printf("\nEnter a number=>\n");
    scanf("%d",&no);

    printf("\n\n========================================\n");
    printf("\n The Maximum DIGIT in Number %d = %d\n",no,Max(no));
    printf("\n========================================\n");

    getch();
    return 0;
}
