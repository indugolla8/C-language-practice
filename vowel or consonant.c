//Check vowel or consonant
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is a consonant");
    }
}