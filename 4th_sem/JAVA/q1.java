// import java.util.Scanner;

// public class q1 {
//     public static void main(String[] args) {
//         String s1=new String();
//         String s2;

//         Scanner in=new Scanner(System.in);

//         System.out.println("Enter String 1:");
//         s1=in.nextLine();
        
//         System.out.println("Enter String 2:");
//         s2=in.nextLine();
//         System.out.println(s2);
//         s1=s1+s2;
//         System.out.println("The concatenated String is:"+s1);
//         String s3=new String(s1.substring(4,9));
//         String s4=new String(s1.substring(10,14));
//         String s5=new String(s1.substring(15));
//         System.out.println("The splitted strings are:"+s3+"\t"+s4+"\t"+s5);
//         in.close();
//     }
// }
// 
import java.util.Scanner;

public class q1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s1;
        s1 = scan.nextLine();
        String s2 = scan.nextLine();

        String con = s1 + s2;
        
        System.out.println(con);
        String[] ss = con.split(" ", 3);
        for (String s : ss) {
            System.out.println(s);
        }

    }
}