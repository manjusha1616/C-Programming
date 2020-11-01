//Write program to print size of int,float,double,etc(use sizeof operator)
#include<stdio.h>
#include<conio.h>

main()
{
    char ch='a';

    printf(" Sizeof int=%d \n\n",sizeof(int));
    printf(" Sizeof character=%d \n\n",sizeof(ch));
    printf(" Sizeof float=%d \n\n",sizeof(float));
    printf(" Sizeof double=%d \n\n",sizeof(double));

    getch();
    return 0;
}
