#include<stdio.h>
int main()
{
    char n[5][20];
    for(int i=0;i<5;i++)
    {
        printf("\n Enter Your Name=");
        gets(n[i]);
    }
    printf("\n Displaying Nmae.........\n");
    for(int i=0;i<5;i++)
    {
        printf("\n  Name=");
        puts(n[i]);
    }
    return 0;
}