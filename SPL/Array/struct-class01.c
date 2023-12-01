///Arrays of structure
#include<stdio.h>

struct student
{
    char name[20];
    int ID;
    char dept[20];
    // int batch_no;
    //char b_group;


};

struct rice
{
    int price[5];
    char type[5];
    int date;
    int net_wght;

};


void main()
{
    int i;
    struct student student[20];
    struct rice rice[10];
    // Get the Students information
    for(i=0; i<2; i++)
    {
        printf("\nEnterd student name: ");
        gets(student[i].name);
        printf("Enter Student ID no: ");
        scanf("%d",&student[i].ID);
        fflush(stdin);
        printf("Enter your Deptartment Name: ");
        gets(student[i].dept);
        fflush(stdin);  ///forget the memory of past string and get new string.
    }
    // Get the information of Rice
    printf("\n");
    for(i=0; i<1; i++)
    {
        printf("\nEnter the price of Rice per KG: ");
        scanf("%d",&rice[i].price);
        printf("Enter the type of the Rice: ");
        fflush(stdin);
        gets(rice[i].type);
        fflush(stdin);
        printf("Enter the Date: ");
        scanf("%d",&rice[i].date);
        printf("Enter weight: ");
        fflush(stdin);
        scanf("%d",&rice[i].net_wght);
        printf("\n");
        fflush(stdin);
    }
    // Print the Students information
    for(i=0; i<1; i++)
    {
        printf("\nThe student name: %s",student[i].name);
        printf("\nID: %d",student[i].ID);
        printf("\nDepartment name: %s",student[i].dept);
    }
    // Print the Rices Information
    for(i=0; i<1; i++)
    {
        printf("\nPrice of Rice: %d",rice[i].price);
        printf("\nType of Rice: %s",rice[i].type);
        printf("\nDate: %d",rice[i].date);
        printf("\nWeight: %d",rice[i].net_wght);
        printf("\n");
    }

}
