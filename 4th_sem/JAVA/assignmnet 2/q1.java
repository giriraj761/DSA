import java.util.Scanner;

class q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        if (number > 99 && number < 1000) {
            if (number % 10 == (number / 100)) {
                System.out.println("The number is palindrome");
            } else {
                System.out.println("The number is not palindrome");
            }
        } else {
            System.out.println("The number is not 3 digit");
        }
        sc.close();
    }
}