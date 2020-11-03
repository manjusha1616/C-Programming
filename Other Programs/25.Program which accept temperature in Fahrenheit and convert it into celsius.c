/*Write a program which accept temperature in Fahrenheit and convert it into celsius(1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)*/

#include<stdio.h>
#include<conio.h>

double FhtoCs(float );

double FhtoCs(float fTemp)
{
    int Ans=0;

    Ans=(fTemp-32)*5/9;

    return Ans;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\nEnter temperature in Fahrenheit => ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("\nTemprature Converted Fahrenheit Into Celcius Is => %.2f ",dRet);

    getch();
    return 0;
}
