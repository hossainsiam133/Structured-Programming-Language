#include<stdio.h>
void main()
{
    int i,z,r,c;
    printf("\nEnter row and column of a matrix:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int transpose[c][r];
    for(i=0; i<r; i++)
    {
        for(z=0; z<c; z++)
        {
            printf("\nA[%d][%d]=",i,z);
            scanf("%d",&a[i][z]);
        }
        printf("\n");
    }

    for(i=0; i<r; i++)
    {
        for(z=0; z<c; z++)
        {
            transpose[z][i]=a[i][z];
        }
    }
    printf("\nTranspose matrix is=\n");
    for(i=0; i<c; i++)
    {

        for(z=0; z<r; z++)
        {
            printf("%d ",transpose[i][z]);
        }
        printf("\n");
    }




}
