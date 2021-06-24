#include<stdio.h>
#include<math.h>
int main()
{
  float radius,area;
  clrscr();
  printf("Enter the radius of a circle \n");
  scanf("%f",&radius);
  area = 3.14159*radius*radius;
  printf("area of the circle is %.2f \n",area);
  getch();
}