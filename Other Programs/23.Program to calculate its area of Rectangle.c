/*Write a program which accept width & height of rectangle from user and calculate its area.(Area = Width * Height)
Input : 5.3 9.78
Output : 51.834*/

#include<stdio.h>
#include<conio.h>

double RectArea(float,float);

double RectArea(float fWidth, float fHeight)
{
    return fWidth*fHeight;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("\nEnter Width => ");
    scanf("%f",&fValue1);

    printf("\nEnter Height => ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("\nArea Of The Rectangle Is => %f \n",dRet);

    getch();
    return 0;
}
