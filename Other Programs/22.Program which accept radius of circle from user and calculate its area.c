/*Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224*/

#include<stdio.h>
#include<conio.h>

double CircleArea(float);

double CircleArea(float fRadius)
{
    return 3.1415*(fRadius*fRadius);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\nEnter radius => ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("\nArea Of The Circle Is => %f \n",dRet);

    getch();
    return 0;
}
