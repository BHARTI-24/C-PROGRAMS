#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three integer numbers for a,b,c:");
  scanf("%d%d%d",&a,&b,&c);
  if ((a<b)&&(a<c))
  printf("\n a is smallest: %d",a);
  else
  {
  if (b<c)
  printf("\n b is smallest: %d",b);
  else
  printf("\n c is smallest: %d",c);
  }
  getch();
}