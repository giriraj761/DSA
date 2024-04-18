import java.util.Scanner;

public class q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        String s3 = s1 + s2;
        System.out.println(s3);
        int len = s3.length();
        String s4[] = new String[4];
        for (int i = 0; i < 4; i++) {
            s4[i] = s3.substring(i * len / 4, (i + 1) * len / 4);
        }
        for (int i = 0; i < 4; i++)
            System.out.println(s4[i]);
        sc.close();
    }
}
