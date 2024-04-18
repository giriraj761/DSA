import java.util.*;

public class q3 {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        String str3 = sc.nextLine();

        StringBuffer newStr = new StringBuffer(str1);

        for (int i = 0; i < str1.length(); i++) {

            if (Character.isLowerCase(str1.charAt(i))) {

                newStr.setCharAt(i, Character.toUpperCase(str1.charAt(i)));
            }

            else if (Character.isUpperCase(str1.charAt(i))) {

                newStr.setCharAt(i, Character.toLowerCase(str1.charAt(i)));
            }
        }
        System.out.println(newStr);

        System.out.println(newStr.reverse());

        if (str1.compareTo(str2) == 0) {
            System.out.println("both string are same");
        } else {
            System.out.println("not same");
        }

        Scanner n = new Scanner(str3);
        n.useDelimiter(" ");

        String newS = n.next() + " " + str1 + " " + n.next();

        System.out.println(newS);
        n.close();
    }

}
