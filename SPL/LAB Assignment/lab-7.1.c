/*Write a program in the programming language C, to get the multiplication result of two different tables of an array of array of arrays
(3D array) and show the multiplied result in a array of arrays. All inputs should come from the user.*/
#include<stdio.h>
int main()
{
    int k,i,j,r1,c1,r2,c2;
    int tab=2;  //from the questions.
    printf("Enter the Row and Column numbers of 1st Matrix: ");
    scanf("%d %d",&r1,&c1);  //user inserted 1st array row and column.
    printf("Enter the Row and Column numbers of 2nd Matrix: ");
    scanf("%d %d",&r2,&c2);  //user inserted 2nd array row and column.
    ///Declaring the size of table,row & column of array 1 and array 2.
    int arr1[tab][r1][c1],arr2[tab][r2][c2];
    int mult=0;
    while(c1!=r2)  //Two matrix can be multiplicative only when the column of 1st and row of 2nd matrix is remain same.
    {
        printf("\nError,Please enter the same numbers of row of 1st & column of 2nd Matrix...");
        printf("\nEnter totall row & column numbers of 1st Matrix:");
        scanf("%d %d",&r1,&c1);
        printf("\nEnter totall row & column numbers of 2nd Matrix:");
        scanf("%d %d",&r2,&c2);
    }
    //Inserting the values in Array 1 & Array 2 by the user=
    printf("\nEnter the values of 1st Matrix:\n");
    for(k=0; k<tab; k++)
    {
        if(k==0)
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    printf("Mat[%d][%d][%d]=",k,i,j);
                    scanf("%d",&arr1[k][i][j]);
                }
                printf("\n");
            }
        }

        if(k==1)
        {
            printf("\nEnter the values of 2nd Matrix:\n");
            for(i=0; i<r2; i++)
            {
                for(j=0; j<c2; j++)
                {
                    printf("Mat[%d][%d][%d]=",k,i,j);
                    scanf("%d",&arr2[k][i][j]);
                }
                printf("\n");
            }
        }
    }

    //using multf to convert 3D Mult results to 2D Mult results.
    //Multiplication results matrix should be same of row of 1st and column of 2nd matrix.
    int multf[r1][c2];
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(int c=0; c<c1; c++)
            {
                //The column of 1st & row of 2nd array is remaining same that is why we take the common as c.
                mult=mult+arr1[0][i][c]*arr2[1][c][j];
                //mult results of row & column between two table is storing in the cell of multf array.
                multf[i][j]=mult;
            }
            mult=0;
        }

    }


    printf("\nArray 1=");
    for(k=0; k<tab; k++)
    {
        if(k==tab-tab)
        {
            for(i=0; i<r1; i++)
            {

                for(j=0; j<c1; j++)
                {
                    printf("%d ",arr1[k][i][j]);

                }
                printf("\n\t");
            }
        }
        if(k==tab-1)
        {
            printf("\nArray 2=");
            for(i=0; i<r2; i++)
            {

                for(j=0; j<c2; j++)
                {
                    printf("%d ",arr2[k][i][j]);

                }
                printf("\n\t");
            }
        }
    }

    //printing the Multiplication of two tables from a 3D array to 2D array=
    printf("\nThe mult in 2D= ");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d ",multf[i][j]);
        }
        printf("\n\t\t");
    }
}


