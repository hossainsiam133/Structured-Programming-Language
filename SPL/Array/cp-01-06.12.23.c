#include<stdio.h>
int main()
{
    int i,j,r1,c1,r2,c2;
    printf("\nEnter totall row & column numbers of 1st Matrix:");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter totall row & column numbers of 2nd Matrix:");
    scanf("%d %d",&r2,&c2);
    int sum[r1][c2];
    int sums=0;
    int arr1[r1][c1],arr2[r2][c2];
     while(r1!=r2&&c1!=c2)
    {
        printf("\nError,Please enter the same numbers of row & column of Both Matrix...");
        printf("\nEnter totall row & column numbers of 1st Matrix:");
        scanf("%d %d",&r1,&c1);
        printf("\nEnter totall row & column numbers of 2nd Matrix:");
        scanf("%d %d",&r2,&c2);
    }

    printf("\nEnter Array 1 values of ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\nEnter Array 2 values of ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    printf("\nArray1=");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nArray2=");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }

    }
    printf("\nSum=");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}
