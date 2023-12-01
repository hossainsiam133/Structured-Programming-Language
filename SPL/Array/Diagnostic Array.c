#include<stdio.h>
void main()
{
    int r1,c1,i,j;
    printf("\nEnter the row and column numbers of a Matrix=");
    scanf("%d %d",&r1,&c1);
    int arr1[r1][c1];
    int sumd=0;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Array1[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");

    }
    printf("\n1st Matrix is=\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",arr1[i][j]);

        }
        printf("\n");

    }
    printf("\nDiaognal numbers of 1st matrix is=");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {
            if(i==j)
            {
                sumd=sumd+arr1[i][j];
                printf("%d ",arr1[i][j]);
            }
        }
    }
    printf("\nDiagonal sum of 1st matrix is=%d",sumd);
    int upper_sum=0,lower_sum=0;
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {
            if(i<j)
            {
                upper_sum=upper_sum+arr1[i][j];

            }
            if(i>j)
            {
                lower_sum=lower_sum+arr1[i][j];
            }
        }

    }
    printf("\nUpper Triangle sum is=%d\nLower Triangle sum is=%d",upper_sum,lower_sum);




}

