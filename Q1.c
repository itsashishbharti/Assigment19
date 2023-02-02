#include<stdio.h>
int main()
{
    char name[5][20];
    int temp[5];
    for(int i=0;i<5;i++)
    {
        printf("\n Enter %d String= ",i+1);
        gets(name[i]);
    }

    for(int i=0;i<5;i++)
    {
        int c=0;
        for(int j=0;name[i][j]!='\0';j++)
        {
            if(name[i][j]=='a'||name[i][j]=='e'||name[i][j]=='i'||name[i][j]=='o'||name[i][j]=='u'||name[i][j]=='A'||name[i][j]=='E'||name[i][j]=='I'||name[i][j]=='O'||name[i][j]=='U')
            {
                c++;
            }
        }
        temp[i]=c;
    }
    printf("\nString\tVowel Number\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\t%d\n",name[i],temp[i]);
    }
    return 0;
}