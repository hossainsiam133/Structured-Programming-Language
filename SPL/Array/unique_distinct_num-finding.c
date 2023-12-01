#include<stdio.h>
int main()
{
    int tot_ele,i,j,c;
    printf("Enter total elements to find the avarage: ");
    scanf("%d",&tot_ele);
    int arr[tot_ele];

    for(i=0; i<tot_ele; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe unique numbers is: ");
    for(i=0; i<tot_ele; i++)
    {
        c=0;

        for(j=0; j<tot_ele; j++)
        {

            if(i!=j)
            {

                if(arr[i]==arr[j])
                {
                    c++;
                }
            }

        }
        if(c==0)
        {
            printf("%d ",arr[i]);
        }


    }
    printf("\nDisnict numbers is: ");

    for(i=0; i<tot_ele; i++)
    {


        for(j=0; j<=i; j++)
        {
            if(arr[i]==arr[j])
                break;

        }
        if(i==j)
        {
            printf("%d ",arr[i]);
        }

    }

}
