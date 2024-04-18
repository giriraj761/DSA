import java.util.Scanner;

public class q1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Scanner str = new Scanner(sc.nextLine());
        str.useDelimiter(" ");
        String arr[] = new String[2];
        int i = 0;
        while (str.hasNext()) {
            arr[i++] = str.next();
        }
        System.out.println(arr[0] + " Kumar " + arr[1]);
        sc.close();
    }
}
