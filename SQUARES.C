#include<stdio.h>
int main()
{
  int n,i;
  int sum = 0;
  clrscr();
  printf("Enter an integer:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)

  sum = sum+(2*i-1)*(2*i-1);
  printf("The sum of squares of first %d odd numbers is %d",n,sum);
  getch();
}
