#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char a[10];

    printf("Enter Data:\n");
    fp=fopen("BMSCE.txt","w");
    fgets(a,6,stdin);
    fclose(fp);

    printf("\n Output\n");
    fp = fopen("BMSCE.txt","r");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fgets(a,6,fp);
    puts(a);
    fclose(fp);
    getch();
}
