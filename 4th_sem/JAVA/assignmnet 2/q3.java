import java.util.Scanner;

public class q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two alphabets");
        char ch1 = sc.next().toLowerCase().charAt(0);
        char ch2 = sc.next().toLowerCase().charAt(0);
        if (Character.isLetter(ch1) && Character.isLetter(ch1))
            System.out.println(ch1 < ch2 ? ch1 + "," + ch2 : ch2 + "," + ch1);
        else
            System.out.println("Enter alphabets");
        sc.close();
    }
}
