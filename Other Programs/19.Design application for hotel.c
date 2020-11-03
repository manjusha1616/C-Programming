/*Design application for hotel. According to the management team of hotel they are giving
discount on total bill amount of customer.
If bill amount is less than 500 then there is no discount , if bill amount is less than 1500
and more than 500 they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have
to return the amount after applying discount.
Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145*/

#include<stdio.h>
#include<conio.h>

float CalculateBill(int);

float CalculateBill(int iAmount)
{
    float Discount=0.0;

    printf(" ***************************$$$$$ Bill $$$$$*************************** \n");
    if(iAmount<=500)
    {
        printf("\n You Have To Pay RS %d .\n\n There Is No Discount For You \n\n",iAmount);
    }
    else if(iAmount>500 && iAmount<1500)
    {
        printf("\n You Have To Pay RS %d .\n\n There Is 10 Percent Discount For You \n\n",iAmount=iAmount-(iAmount/10));
    }
    else if(iAmount>1500)
    {
        printf("\n You Have To Pay RS %d .\n\n There Is 15 Percent Discount For You \n\n",iAmount=iAmount-(iAmount/15));
    }
    printf(" ***************************$$$$$ Bill $$$$$*************************** \n");
}

int main()
{
    int iAmount=0;

    printf("\n ********************* Welcome To The Hotel ********************* \n");
    printf("\n Enter The Total Bill Of Customer \n");
    scanf(" %d",&iAmount);

    CalculateBill(iAmount);

    getch();
    return 0;
}
