
#include<stdio.h>
void main()
{
  int a[50],large,small,n,i,min,max;
  printf("Enter number of elements:");
  scanf("%d",&n);

  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  small = a[0];
  large = a[0];
  min = 0;
  max = 0;
  for(i=1;i<n;i++)
  {
    if(a[i]>large)
    {
      large = a[i];
      max = i;
    }
    if(a[i]<small)
    {
      small = a[i];
      min = i;
    }
  }
  printf("The largest is: %d and smallest is: %d\n",large,small);
  a[min] = a[min]+a[max];
  a[max] = a[min]-a[max];
  a[min] = a[min]-a[max];
  printf("Array after interchange is\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
  getch();
}
