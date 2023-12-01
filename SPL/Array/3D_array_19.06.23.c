#include<stdio.h>
int main()
{
    int arr[2][3][3]= {{ {1,2,3},{4,5,6},{7,8,9}},{ {10,11,12},{13,14,15},{16,17,18}  } };
    int i,j,k,tab,row,col;

    for(k=0; k<2; k++)
    {

        for(i=0; i<3; i++)
        {
            printf("\t");
            for(j=0; j<3; j++)
            {
                printf("%d ",arr[k][i][j]);
            }
            printf("\n");
        }
    }

    printf("\nI went to see the elements of table/row/col: ");
    scanf("%d %d %d",&tab,&row,&col);
    if(tab<=2 && row<=3 && col<=3)
    {
        printf("\nArray[%d][%d][%d]= %d",tab-1,row-1,col-1,arr[tab-1][row-1][col-1]);
    }
    else
        printf("\nWrong input!Out of Range.");


}
