/*Write a recursive program which accept number from user and return smallest digit
Input : 87983
Output : 3*/

#include<stdio.h>
#include<conio.h>

int Min(int);

int Min(int iNo)
{
    static int min=99999999;

    if(iNo!=0)
    {
        if(iNo%10<min)
        {
            min=iNo%10;
        }
        return Min(iNo/10);
    }
    return min;
}
int main()
{
    int no=0;

    printf("\nEnter a number=>\n");
    scanf("%d",&no);

    printf("\n\n========================================\n");
    printf("\n The smallest DIGIT in Number %d = %d\n",no,Min(no));
    printf("\n========================================\n");

    getch();
    return 0;
}
