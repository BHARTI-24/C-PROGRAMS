#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c,Perimeter,s,Area;
   printf("\n Enter the three sides of a triangle \n");
   scanf("%f%f%f",&a,&b,&c);
   Perimeter = (a+b+c);
   s = (a+b+c)/2;
   Area = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("\n Area of triangle = %.2f \n",Area);
   getch();
}