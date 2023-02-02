#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][20]={"Anish","Raju","Rishi","Deepu","Piyush"};
    char search[20];
    printf("\n Enter Your String For Search in List=");
    gets(search);
    int flag=0;
    for(int i=0;i<5;i++)
    {
      
        if(strcmp(name[i],search)==0)
        {
            flag=1;
            break;
        }
        
    }
     if(flag==1)
      {
            printf("\n String Found in List.....");
      }
      else
      {
          printf("\n String Not Found in List....."); 
      }
        return 0;
}