/*Write a program in the C programming language using a structure to make a
list of doctors from different hospitals in different specialties, where you
should have the doctor's name, ID, profession, hometown, registered hospital,
designation, blood type, age, and doctor's salary.*/
#include<stdio.h>
//lets store information of n different doctors information.
//Product information contains name,ID,profession,hometown,registered hospital,designation,blood type,age & salary.
struct doctor
{
    char name[30];
    int ID;
    char profession[25];
    char hometown[30];
    char reg_hospital[30];
    char designation[25];
    char blood[5];
    int age;
    int salary;
};

int main()
{
    //declares an array of structure which can store 15 doctors infprmation.
    struct doctor doctor[15];
    int n,i;
    printf("\nEnter the quantity of doctor that you have to list: ");
    scanf("%d",&n);
    //accepts data for doctors information from user and stores it to structure with using for loop.
    //This for loop will loop only n times as we have declared doctor structure variable to store n doctors information.
    for(i=0; i<n; i++)
    {
        printf("\nEnter the name of %dth Doctor: ",i+1);
        fflush(stdin);
        gets(doctor[i].name);
        printf("ID: ");
        scanf("%d",&doctor[i].ID);
        fflush(stdin);
        printf("Profession: ");
        gets(doctor[i].profession);
        printf("Hometown: ");
        gets(doctor[i].hometown);
        printf("Registered Hospital: ");
        gets(doctor[i].reg_hospital);
        printf("Designation: ");
        gets(doctor[i].designation);
        printf("Blood Type: ");
        gets(doctor[i].blood);
        printf("Age: ");
        scanf("%d",&doctor[i].age);
        printf("Salary: ");
        scanf("%d",&doctor[i].salary);

    }
    printf("\n\n");
    //printing n numbers of doctor information.
    for(i=0; i<n; i++)
    {

        printf("\nThe name of %dth Doctor is: %s",i+1,doctor[i].name);
        printf("\nID: %d",doctor[i].ID);
        printf("\nProfession: %s",doctor[i].profession);
        printf("\nHometown: %s",doctor[i].hometown);
        printf("\nRegistered Hospital: %s",doctor[i].reg_hospital);
        printf("\nDesignation: %s",doctor[i].designation);
        printf("\nBlood Type: %s",doctor[i].blood);
        printf("\nAge: %d",doctor[i].age);
        printf("\nSalary: %d",doctor[i].salary);
        printf("\n");

    }

}
