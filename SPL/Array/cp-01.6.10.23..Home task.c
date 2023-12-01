#include<stdio.h>
void main()
{
    int row,col;
    printf("Enter the Row and column Numbers:");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter the array values.\n");
     for(int i=0;i<row;i++)
   {
       //printf("\t");
       for(int z=0;z<col;z++)
       {
           printf("A[%d][%d]=",i,z);
           scanf("%d",&arr[i][z]);
       }
       printf("\n");
   }
    printf("A=");
   for(int i=0;i<3;i++)
   {
       printf("\t");
       for(int z=0;z<3;z++)
       {
           printf("%d ",arr[i][z]);
       }
       printf("\n");
   }

}
