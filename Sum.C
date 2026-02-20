//Read two numbers and print sum
#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  if(a==0)
     printf("%d",b);
  else if(b==0)
     printf("%d",a);
  else{
     c=a+b;
     printf("%d",c);
  }
}
