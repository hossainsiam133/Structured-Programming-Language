#include<stdio.h>
int main()
{
char name[20],fathers_name[20],city[20],country[20];

int i=0;
char ch;

printf("enter your name:");
/*gets(name);
//puts(name);
for(i=0;name[i]!='\0';i++)
    //printf("%c",name[i]);
   putchar(name[i]);*/

   while((ch=getchar())!='\n'){
    name[i]=ch;
    i++;
   }
   name[i]='\0';
   puts(name);
}
