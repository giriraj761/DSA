#include<stdio.h>
int main()
{
    int n,m,sumr=0,suml=0;
    printf("enter size of matrix m x n:");scanf("%d %d",&m,&n);

    if(m==n)
    {
        int arr[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&arr[i][j]);

                if(i==j)
                {
                    suml+=arr[i][j];
                }
                if(i+j==m-1)
                {
                    sumr+=arr[i][j];
                }
            }
        }
        
        printf("\n\nThe sum of left and right diagonal are :%d , %d",suml,sumr);
    }
    
    if(m!=n)
    {
        printf("the matrix may have multiple diagonals : try again");
    }
    return 0;
}