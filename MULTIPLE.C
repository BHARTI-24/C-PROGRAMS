#include<stdio.h>
void main()
{
  int sum = 0,i,n;
  clrscr();
  printf("Enter the value from 1 to 100:");
  scanf("%d",&n);
  printf("\n Multiplication table for %d is:\n|n",n);
  for(i = 1;i<=100;i++);
  {
    printf("%d % %d = %d\n",n,i,(i*n));
  }
  getch();
}