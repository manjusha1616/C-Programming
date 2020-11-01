/*write program to accept student details from user as student name,roll no,course,city.
display all info after accepting info using single printf statement*/
#include<stdio.h>
#include<conio.h>
int main()
{
        char s_name[20],s_course[10],s_city[10];
        int s_rollno;

        printf("Enter student name \n");
        scanf("%s",&s_name);
        printf("Enter student roll no \n");
        scanf("%d",&s_rollno);
        printf("Enter student course \n");
        scanf("%s",&s_course);
        printf("Enter student city \n");
        scanf("%s",&s_city);

        printf("\n*************************\n");

        printf("\n student information=\n\n Name= %-8s\n Roll no= %-5d\n Course= %-5s\n City= %-8s|",s_name,s_rollno,s_course,s_city);

        printf("\n\n*************************");

        getch();
        return 0;
}
