#include<stdio.h>
#include<conio.h>
int main()
{
   int length,breadth,area;
   clrscr();
   printf("\n Enter length of rectangle");
   scanf("%d",&length);
   printf("\n Enter the breadth of rectangle");
   scanf("%d",&breadth);
   area = length*breadth;
   printf("\n Area of rectangle = %d",area);
   getch();
}
