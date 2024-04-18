import java.util.Scanner;

class transpose 
{
    static void printm(int arr[][])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

    public static void main(String args[]) {

        int[][] arr = new int[3][3];
        int[][] arrt = new int[3][3];
        int[][] arrm = new int[3][3];
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter elements of Matrix : ");
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                arr[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++)
            {
                arrt[i][j] = arr[j][i];

                for (int k = 0; k < 3; k++) 
                {
                    arrm[i][j] += arr[i][k] * arr[k][j];
                }
            }
        }

        sc.close();
        
        System.out.println(" Matrix : ");
        printm(arr);

        System.out.println(" Transpose of Matrix : ");
        printm(arrt);

        System.out.println(" Multiplication of Matrix : ");
        printm(arrm);
    }

}