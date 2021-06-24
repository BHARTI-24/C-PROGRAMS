#include<stdio.h>
#include<conio.h>
int main()
{
  int n,r,cube,sum=0,temp;
  clrscr();
  printf("Enter the number\n");
  scanf("%d",&n);
  temp = n;
  while(n>0)
  {
    r = n%10;
    cube = r*r*r;
    sum = sum+cube;
    n = n/10;
  }
  n = temp;
  if(n==sum)
  {
    printf("Armstrong Number");
  }
  else
    printf("Not an armstrong number");
    getch();
}















