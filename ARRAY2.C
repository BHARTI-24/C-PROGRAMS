#include<stdio.h>
int main()
{
  int i,n,a[10],sum=0;
  float avg;
  printf("enter the value of n\n");
  scanf("%d",&n);
  printf("enter %d values\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum = sum+a[i];
  }
  avg =(float)sum/n;
  printf("the average is %f\n",avg);
  getch();
}
