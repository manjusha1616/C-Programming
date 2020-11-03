/*Program for Arithmatic Operators Implementation Using Function*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Function Declaration
int Add(int,int);
int Sub(int,int);
int Mult(int,int);
int Div(int,int);
int Mod(int,int);

//Main Function Defination
int main()
{
    int No1=0,No2=0,Choice=0;

    printf("\n======================*****Fork calculator using \'c\'*****======================\n");

    printf("\n\n==========================*********************==========================\n\n");

    for(;;)
    {
         printf("Enter Your Choice....\n\n");
         printf("\n\t\t 1.Addition\n\t\t 2.Substraction\n\t\t 3.Multiplication\n\t\t 4.Division\n\t\t 5.Modulo\n\t\t 6.Exit");
         printf("\n\n==========================*********************==========================\n\n");
         printf("\nSelect Your Choice=>\n\t\t");
         scanf("%d",&Choice);

         switch(Choice)
         {
            case 1:
                    printf("\n\nEnter the Value of No1 and No2 for Addition=>\n");
                    scanf("%d%d",&No1,&No2);
                    printf("\nAddition of %d and %d is = %d",No1,No2,Add(No1,No2));
                    printf("\n\n==========================*********************==========================\n\n");

                    getch();
                    system("cls");
                    break;

            case 2:
                    printf("\n\nEnter the Value of No1 and No2 for Substraction=>\n");
                    scanf("%d%d",&No1,&No2);
                    printf("\nSubstractionn of %d and %d is = %d",No1,No2,Sub(No1,No2));
                    printf("\n\n==========================*********************==========================\n\n");

                    getch();
                    system("cls");
                    break;

            case 3:
                    printf("\n\nEnter the Value of No1 and No2 for Multiplication=>\n");
                    scanf("%d%d",&No1,&No2);
                    printf("\n Multiplication of %d and %d is = %d",No1,No2,Mult(No1,No2));
                    printf("\n\n==========================*********************==========================\n\n");

                    getch();
                    system("cls");
                    break;

            case 4:
                    printf("\n\nEnter the Value of No1 and No2 for Division=>\n");
                    scanf("%d%d",&No1,&No2);
                    printf("\nDivision of %d and %d is = %d",No1,No2,Div(No1,No2));
                    printf("\n\n==========================*********************==========================\n\n");

                    getch();
                    system("cls");
                    break;

            case 5:
                    printf("\n\nEnter the Value of No1 and No2 for Modulo=>\n");
                    scanf("%d%d",&No1,&No2);
                    printf("\nModulo of %d and %d is = %d",No1,No2,Mod(No1,No2));
                    printf("\n\n==========================*********************==========================\n\n");

                    getch();
                    system("cls");
                    break;

            case 6:
                    goto DWN;


            default:
                    printf("\n\nEntered Choice is Invalid Please Enter Valid Choice\n");
                    printf("\n\n==========================*********************==========================\n\n");

                    getch();
                    system("cls");
                    break;
         }

    }
    DWN:
    printf("\n\n==========================*********************==========================\n\n");
    printf("\nThanks For Working With Fork Demo Calculator\n\n");
    printf("\n==========================*********************==========================\n\n");

    getch();
    return 0;
}

//Funjction Definations

int Add(int N1,int N2)
{
    int Sum=0;
    Sum=N1+N2;
    return Sum;
}

int Sub(int N1,int N2)
{
    int Minus=0;
    Minus=N1-N2;
    return Minus;
}

int Mult(int N1,int N2)
{
    int Multiply=0;
    Multiply=N1*N2;
    return Multiply;
}

int Div(int N1,int N2)
{
    int Divide=0;
    Divide=N1/N2;
    return Divide;
}

int Mod(int N1,int N2)
{
    int Modulo=0;
    Modulo=N1%N2;
    return Modulo;
}






















