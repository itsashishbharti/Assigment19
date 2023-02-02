#include<stdio.h>
#include<string.h>
int main()
{
    char list[5][20]={"ashish","deepu","dinkar","abhash","abhishek"};
    char n[20];
    int fact=1,n1,flag=0;
    printf("\n Username :-");
    gets(n);
    for(int i=0;i<5;i++)
    {
        if(strcmp(n,list[i])==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n Enter a number=");
        scanf("%d",&n1);
        for(int i=1;i<=n1;i++)
        {
            fact=fact*i;
        }
        printf("\n Factorial=%d",fact);
    }
    else
    {
        printf("\n!Error Found!");
    }
    return 0;
}