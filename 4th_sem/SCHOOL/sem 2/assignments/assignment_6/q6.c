#include<stdio.h>
int main()
{
    int n,m,sumr=0,suml=0,n2;
    printf("enter size of matrix m x n:");scanf("%d %d",&m,&n);
    printf("enter the 2nd point for array 2");scanf("%d",&n2);

        int arr1[m][n],arr2[n][n2],arr3[m][n2];

        printf("enter 1st matrix: \n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&arr1[i][j]);
            }
        }
        
        printf("enter 2nd matrix :\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n2;j++)
            {
                scanf("%d",&arr2[i][j]);
                arr3[i][j]=0;
            }
        }

         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n2;j++)
            {
                for(int k=0;k<n2;k++)
                {
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }


        printf("the matrix formed after multiplication of matrix1 and matrix2 is: ");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
          
    
    return 0;
}