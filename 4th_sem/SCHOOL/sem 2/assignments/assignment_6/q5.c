#include<stdio.h>
int main()
{
    int n,m,sumr=0,suml=0;
    printf("enter size of matrix m x n:");scanf("%d %d",&m,&n);

        int arr1[m][n],arr2[m][n],arr3[m][n];

        printf("enter 1st matrix: \n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("enter 2nd matrix :\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&arr2[i][j]);
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }

        printf("the matrix formed after addition of matrix1 and matrix2 is: ");
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