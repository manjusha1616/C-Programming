//write a program to print character A to Y

#include<stdio.h>
#include<conio.h>

main()
{
    char ch=0;

    printf("\n\n==================\n");
    for(ch=65;ch<=90;ch++)
    {
        printf("\n %c \n",ch);
    }

    printf("\n\n==================\n");
    getch();
    return 0;
}
