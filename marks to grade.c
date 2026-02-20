//Find grade (marks)
#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=90&&marks<=100)
    {
        printf("Grade A");
    }
    else if(marks>=80)
    {
        printf("Grade B");
    }
    else if(marks>=70)
    {
        printf("Garde C");
    }
    else if(marks>=60)
    {
        printf("Grade D");
    }
    else if(marks>=50)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Fail");
    }
}