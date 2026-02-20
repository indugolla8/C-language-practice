//Swap two numbers (without temp)
#include<stdio.h>
int main()
{
    int a,b;
    printf("Before swap\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping");
    printf("\na=%d",a);
    printf("b=%d",b);
}