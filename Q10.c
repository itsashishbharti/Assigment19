#include<stdio.h>

int main()
{
    char pass[10],username[10],ch;
    int i;
    printf("\n Enter User Name=");
    gets(username);
    printf("n Enter Password <8 Characters>:");
    for(i=0;i<8;i++)
    {
        ch=getchar();
        pass[i]=ch;
        ch='*';
        printf("%c",ch);
    }
    pass[i]='\0';
    return 0;
}