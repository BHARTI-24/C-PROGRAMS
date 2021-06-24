#include<stdio.h>
void main()
{
  int m,n,i;
  printf("Enter the values of m and n\n");
  scanf("%d%d",&m,&n);
  for(i=m;m<n;m++)
  {
    if(m%2 == 0)
      printf("%d is even number\n",m);
  }
  getch();
}