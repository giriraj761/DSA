import java.util.Scanner;

public class q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char ch = sc.next().charAt(0);
        char nch = ch >= 'a' && ch <= 'z' ? (char) (ch - 'a' + 'A')
                : (ch >= 'A' && ch <= 'Z') ? (char) (ch - 'A' + 'a') : '0';
        if (nch == '0') {
            System.out.println("Invalid char");
        } else {
            System.out.println("your char was: " + ch + "\nnew char is: " + nch);
        }
        sc.close();
    }
}
