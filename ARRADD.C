#include<stdio.h>
int main()
{
  int a[100][100],b[100][100],sum[100][100];
  int r,c,i,j;
  printf("Enter the number of rows:\n");
  scanf("%d",&r);
  printf("Enter the number of columns:\n");
  scanf("%d",&c);

  printf("\nEnter elements of first matrix:\n");
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  {
      printf("Enter element a%d%d":,i+1,j+1);
      scanf("%d",&a[i][j]);
  }

  printf("\nEnter elements of second matrix:\n");
  for (int i=0;i<r;++i)
    for(int j=0;j<0;++j)
  {
      printf("Enter element b%d%d:",i+1,j+1);
      scanf("%d",&b[i][j]);
  }

  for(int i=0;i<r;++i)
  for(int j=0;j<c;++j)
  {
      sum[i][j] = a[i][j]+b[i][j];
  }

  printf("\nSum of two matrices:\n");
  for(int i=0;i<r;++i)
    for(int j=0;j<c;++j)
  {
      printf("%d",sum[i][j]);
      if(j == c-1)
      {
          printf("\n\n");
      }
  }
      return 0;
}








