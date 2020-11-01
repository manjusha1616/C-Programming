//write a program to print ASCII table(0-127)
#include<stdio.h>
#include<conio.h>
main()
{
    int i=0;

    printf("ASCII table => \n\n");
    while(i<128)
    {
        printf("\n %d= %c \n",i,i);
        i++;

    }
    getch();
    return 0;
}
