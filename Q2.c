#include<stdio.h>
#include<string.h>
int main()
{
    char city[10][20];
    char temp[20];
    for(int i=0;i<10;i++)
    {
    printf("\nEnter %d City Name=",i+1);
    gets(city[i]);
    }
    for(int i=0;i<9;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(strcmp(city[i],city[j])>0)
            {
                strcpy(temp,city[i]);
                strcpy(city[i],city[j]);
                strcpy(city[j],temp);
            }
        }
    }
    printf("\n Sorted List Of City.....\n");
    for(int i=0;i<10;i++)
    {
        printf("%s \n",city[i]);
    }
    return 0;
}