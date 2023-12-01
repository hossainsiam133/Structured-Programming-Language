#include<stdio.h>
int main()
{
    char name[15],Fath_name[15],city[15],country[15];

    int i=0;
    char ch;
    printf("Enter your name:");
    while((ch=getchar())!='\n')
    {
        name[i]=ch;
        i++;
    }
    name[i]='\0';
    puts(name);



}
