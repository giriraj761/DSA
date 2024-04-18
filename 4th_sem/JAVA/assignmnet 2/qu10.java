import java.util.Scanner;
import java.util.stream.IntStream;


public class qu10 {
    public static void main(String[] args) {

        int[] a = new int[10];
        Scanner sc = new Scanner(System.in);
        int dig = sc.nextInt();
        
        while(dig>0)
        {
            a[dig%10]=1;
            dig/=10;
        }
        int sum = IntStream.of(a).sum();
        System.out.println("The number of distinct element are " + sum);
    }
}
