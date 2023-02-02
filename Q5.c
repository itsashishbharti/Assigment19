#include<stdio.h>
int main()
{
    int count=0;
    char email[5][20]={"Ashish@gmail.com","Raju@gmail.com","Kisu@gmail.com","Ram@gmail.com","Deepu@gmail.com"};
   for(int i=0;i<5;i++)
   {
    int flag=0;
        for(int j=0;email[i][j]!='\0';j++)
        {
            if(email[i][j]=='@')
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            count++;
        }
   }
   if(count==5)
   {
    for(int i=0;i<5;i++)
    {   
        if((i+1)%2!=0)
        printf("\n Email Id:-%s",email[i]);
    }
   }
   
   
   
    return 0;
}