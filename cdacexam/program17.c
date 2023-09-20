
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("enter the elements of matrix A:");
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");

    }
    printf("enter the element of matrix B:");
    for (j=0;j<2;j++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");


    }
    for (i=0;i<2;i++)
    {
    for(j=0;j<2;j++)  
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("the sum of two matrix is:");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("\t%d",c[i][j],i,j);

        }
        printf("\n");
    } 

    }
    
}