#include<stdio.h>
#include<conio.h>
void main()
{
float fahrenheit,celsius;
printf("Enter the temperature in fahrenheit \n");
scanf("%f",&fahrenheit);
celsius=((fahrenheit-32)*5)/9;
printf("Temperature in celsiusis is %f \n",celsius);
getch();
}