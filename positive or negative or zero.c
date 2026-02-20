//Check positive / negative / zero
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("It is positive");
    }
    else if(n<0)
    {
        printf("It is negative");
    }
    else
    {
        printf("It is a zero");
    }
}

