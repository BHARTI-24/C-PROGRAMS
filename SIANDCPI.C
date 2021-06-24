#include<stdio.h>
#include<math.h>
void main()
{
  float p,r,t,a,si,ci;
  clrscr();
  printf("Enter principle = ");
  scanf("%f",&p);
  printf("Enter rate = ");
  scanf("%f",&r);
  printf("Enter time = ");
  scanf("%f",&t);

  si = (p*r*t)/100;
  printf("Simple interest = %f",si);
  a = p*(pow((1+r/100),t));
  ci = a-p;
  printf("\n Compound interest = %f",ci);
  getch();
}