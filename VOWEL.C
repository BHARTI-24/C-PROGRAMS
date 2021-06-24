
#include<stdio.h>
#include<conio.h>
void vowel(char);
void main()
{
  char ch;
  printf("Enter any alphabet:");
  scanf("%c",&ch);
  vowel(ch);
  getch;
}
  void vowel(char ch)
  {
  switch (ch)
  {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
     printf("Vowel\n");
     break;
    default:
       printf("Consonant");
    }
}
