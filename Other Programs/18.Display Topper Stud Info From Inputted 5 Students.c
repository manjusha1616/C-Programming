/*      Program to accept details of 5 students from user
        as Roll number,Marks of Three subjects Physics,Chemistry and Maths,Total and percentage.
        Display Information of Topper Student in Them.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Max 5

int Topper_stud();

struct S_Details
{
    char S_Name[10];
    int R_No;
    int M_Phy,M_Chem,M_Maths,Total;
    float per;
}Stud[5];

int main()
{
    int i=0,Topper1=0,Topper2=0;

    printf("\nEnter %d  Students Details=>\n",Max);

    for(i=0;i<Max;i++)
    {
        printf("\n==================***************==================\n");
        printf("\nEnter The Name of %d Student=>",i+1);
        //gets(Stud[i].S_Name);
        fflush(stdin);
        scanf("%[^\n]",&Stud[i].S_Name);
        fflush(stdin);

        printf("\nEnter Roll Number of %d Student=>",i+1);
        scanf("%d",&Stud[i].R_No);

        printf("\nEnter Marks of 3 Subjects as Physics,Chemistry and Maths of Student=>\n");
        printf("\nPhysics=>");
        scanf("%d",&Stud[i].M_Phy);
        printf("\nChemistry=>");
        scanf("%d",&Stud[i].M_Chem);
        printf("\nMaths=>");
        scanf("%d",&Stud[i].M_Maths);

        Stud[i].Total=Stud[i].M_Phy+Stud[i].M_Chem+Stud[i].M_Maths;
        Stud[i].per=Stud[i].Total/3;
        printf("\n\nTotal Marks of Student => %d \n",Stud[i].Total);
    }
    system("cls");


    printf("\n\n\tInformation Of Topper Students is=>\n\n");
    Topper_stud();

    getch();
    return 0;
}

int Topper_stud()
{
    int i=0,j=0,temp=0,Topper1=0,Topper2,temp2=0;

    Topper1=Stud[i].per;

    for(i=1;i<=Max;i++)
    {
        if(Topper1<Stud[i].per)
        {
            Topper1=Stud[i].per;
            temp=i;
        }
    }

    printf("\n\n\tFirst Topper Students is=>\n\n");
    printf("\n\t==========**************==========\n");
    printf("\n\t\tName = %s",Stud[temp].S_Name);
    printf("\n\n\t\tRoll Number = %d",Stud[temp].R_No);
    printf("\n\n\t\tTotal Marks = %d",Stud[temp].Total);
    printf("\n\n\t\tPercentage  = %f",Stud[temp].per);
    printf("\n\n\t==========**************==========\n\n");

    Topper2=Stud[j].per;

    for(j=1;j<=Max;j++)
    {
        if(Stud[j].per<Topper1)
        {
            if(Topper2<Stud[j].per)
            {
                Topper2=Stud[j].per;
                temp2=j;
            }
        }
    }
    printf("\n\n\tSecond Topper Students is=>\n\n");
    printf("\n\t==========**************==========\n");
    printf("\n\t\tName = %s",Stud[temp2].S_Name);
    printf("\n\n\t\tRoll Number = %d",Stud[temp2].R_No);
    printf("\n\n\t\tTotal Marks = %d",Stud[temp2].Total);
    printf("\n\n\t\tPercentage  = %f",Stud[temp2].per);
    printf("\n\n\t==========**************==========\n\n");
}
