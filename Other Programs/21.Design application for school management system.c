/*Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for third standard 21000 and
for fourth standard fees are 23450.
We have to accept standard from user and display the corresponding fees.
Input : 2 Output : 12790
Input : 4 Output : 23450
Input : 6 Output : Wrong input*/

#include<stdio.h>
#include<conio.h>

int SchoolFees(int);

int SchoolFees(int iStandard)
{
    printf("***************************$$$$$$$$$$*************************** \n");
    switch(iStandard)
    {
        case 1:
                printf("\n School fees of 1'st standard is 8900 \n");
                break;

        case 2:
                printf("\n School fees of 2'nd standard is 12790 \n");
                break;

        case 3:
                printf("\n School fees of 3'rd standard is 21000 \n");
                break;

        case 4:
                printf("\n School fees of 4'th standard is 23450 \n");
                break;

        default:
                printf("\n Invalid input \n");
                break;
    }
    printf("\n***************************$$$$$$$$$$*************************** \n");
}

int main()
{
    int Std=0;

    printf("\n*****************************WELCOME TO SCHOOL*****************************\n\n Enter Your Standard For Display Corresponding Fees \n");
    scanf("%d",&Std);

    SchoolFees(Std);

    getch();
    return 0;
}
