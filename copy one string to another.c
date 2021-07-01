
     #include<stdio.h>
     #include<string.h>
     int main()
     {
        char text1[100];
        char text2[100];
        int i;

        printf("Input string:");
        gets(text1);

        for(i=0;text1[i]!='\0';i++)
        {
           text2[i] = text1[i];
        }
        text2[i]='\0';
        printf("Original string = %s\n",text1);
        printf("Copied string = %s\n",text2);
        printf("Length of string is = %d\n",i);
        return 0;
      }















