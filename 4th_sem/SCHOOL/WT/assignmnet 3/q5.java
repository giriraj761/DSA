import java.util.Scanner;

public class q5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your marks:");
        double marks = sc.nextDouble();
        if (marks >= 90 && marks <= 100) {
            System.out.println("O");
        } else if (marks >= 80 && marks < 90) {
            System.out.println("E");
        } else if (marks >= 70 && marks < 80) {
            System.out.println("A");
        } else if (marks >= 60 && marks < 80) {
            System.out.println("B");
        } else if (marks >= 50 && marks < 60) {
            System.out.println("C");
        } else if (marks >= 40 && marks < 50) {
            System.out.println("D");
        } else if (marks >= 0 && marks < 40) {
            System.out.println("F");
        } else {
            System.out.println("Enter a valid marks");
        }
        sc.close();
    }
}
