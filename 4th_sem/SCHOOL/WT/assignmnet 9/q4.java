import java.util.Scanner;

public class q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name1 = sc.nextLine();
        String name2 = sc.nextLine();
        Scanner n1 = new Scanner(name1);
        Scanner n2 = new Scanner(name2);
        n1.useDelimiter(" ");
        n2.useDelimiter(" ");
        String newName1 = n1.next() + " " + n1.next();
        String newName2 = n2.next() + " " + n2.next() + " " + n1.next();
        newName1 += " " + n2.next();
        System.out.println(newName1 + "\n" + newName2);
        n1.close();
        n2.close();
        sc.close();
    }
}
 