#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][10]={"bum","is ","pot","old","dear"};
    int c=strlen(s[0]);
    char  ch=s[0][c-1];
    int has[122]={0};
    char temp;
    for(int i=1;i<5;i++)
    {
        int j=s[i][0];
        has[j]++;
    }
    for(int i=0;i<122;i++)
    {
        if(has[i]!=0)
        {
            
            if(ch<i)
            {
                temp=i;
                break;
            }
        }
    }
    int tempi;
    for(int i=1;i<5;i++)
    {
        if(temp==s[i][0])
        {
            tempi=i;
            break;
        }
    }
    printf("\nWord1=%s\tWord2=%s",s[0],s[tempi]);
    printf("\nOutput : %d",s[tempi][0]-s[0][2]+1);
   return 0;
}