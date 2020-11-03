/*We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25 rupees per kilometre .
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after
100 kilometres.
We have to accept number of kilometres from user and return the estimated rent.
Input : 73 Output : 1825
Input : 132 Output : 1980
Input : 189 Output : 2835*/

#include<stdio.h>
#include<conio.h>

int TouristBill(int);

int TouristBill(int iKilometer)
{
    printf("***************************$$$$$$$$$$*************************** \n");
    if(iKilometer<100)
    {
        printf("\n You Have To Pay RS %d For %d Kilometers \n\n",iKilometer*25,iKilometer);
    }
    else if(iKilometer>100)
    {
        printf("\n You Have To Pay RS %d For %d Kilometers \n\n",iKilometer*15,iKilometer);
    }
    printf("***************************$$$$$$$$$$*************************** \n");
}
int main()
{
    int Km=0;

    printf("\n***************** Welcome To The Tourist Company ***************** \n");
    printf("\n Enter Number Of Kilometers For Estimated Rent\n");
    scanf(" %d",&Km);

    TouristBill(Km);

    getch();
    return 0;
}

