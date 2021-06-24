#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1,y1,x2,y2,distance;
clrscr();
printf("enter the first point\n");
scanf("%f%f",&x1,&y1);
printf("enter the second point\n");
scanf("%f%f",&x2,&y2);
distance=sqrt(pow(x2-x1,2) +pow(y2-y1,2));
printf("the distance is %f",distance);
getch();
}