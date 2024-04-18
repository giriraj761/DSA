import java.util.Scanner;

public class q8 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter first name: ");
        String first = sc.nextLine();
        System.out.print("Please enter last name: ");
        String last = sc.nextLine();
        System.out.println("Reversed name: " + last + " " + first);

    }
}
