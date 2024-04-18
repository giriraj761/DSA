import java.util.Scanner;

public class q7 {
    public static void main(String[] args) {
        System.out.println("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int temp = number;
        int sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        System.out.println(number + " > " + sum);
        sc.close();

    }
}
