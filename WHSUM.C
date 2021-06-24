#include<stdio.h>
void main()
{
  int m,sum=0,num;
  printf("Enter a number");
  scanf("%d",&num);
  while(num>0)
  {
    m = num%10;
    sum = sum+m;
    num = num/10;
  }
  printf("The sum of the digits is %d",sum);
  getch();
}