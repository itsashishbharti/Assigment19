#include<stdio.h>
#include<string.h>
void palind();
int main()
{
    char string[5][20]={"raju","nayan","kuuk","ashihsa","Deepu"};
    palind(string);
    return 0;
}
void palind(char n[][20])
{
    for(int a=0;a<5;a++)
    {
    int c=strlen(n[a]);
    int s=0;
    for(int i=0;i<c;i++)
    {
        if(n[a][i]!=n[a][c-i-1])
        {
            s=1;
            break;
        }
    }
    
    if(s==0)
    {
        printf("\n String is Palindrom=  %s ",n[a]);
    }
    }
}