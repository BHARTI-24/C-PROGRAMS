 #include<stdio.h>
int main()
{
  int i,j,r,c;
  int a[100][100],s[100];
  printf("\nInput the number of students and number of subjects:");
  scanf("%d%d",&r,&c);

  printf("input data:\n");
  for(i=0;i<r;i++)
  {
     printf("\n");
     for(j=0;j<c;j++)
     {
       printf("Student[%d] marks in subject[%d]:",i+1,j+1);
       scanf("%d",&a[i][j]);
     }
  }
  for(j=0;j<c;j++)
  {
      s[j]=a[0][j];
      for(i=0;i<r;i++)
      {
       if(s[j]<a[i][j])
       s[j]=a[i][j];
      }
  }
  for(i=0;i<c;i++)
  {
    printf("\n");
    printf("Highest in subject[%d] is %d",i+1,s[i]);
  }
  printf("\n");
  getch();
}

