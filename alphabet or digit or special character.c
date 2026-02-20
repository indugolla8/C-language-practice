//Check alphabet / digit / special character
#include<stdio.h>
int main()
{
    char ch;
    scanf("%d",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        printf("It is an alphabet");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is a special character");
    }
}