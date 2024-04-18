import java.util.Scanner;

public class q7 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();
        int temp = num;
        int rev = 0;
        while (temp > 0) {
            rev *= 10;
            rev += temp % 10;
            temp /= 10;
        }
        if (num == rev) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not a palindrome");
        }
        sc.close();
    }
}
