import java.util.Scanner;
class InvalideUSN extends Exception {
    InvalideUSN(String err) {
        super(err);
    }
}

public class q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String USN = sc.next();
        try {
            if (USN.length() != 10) {
                throw new InvalideUSN("USN length is not 10");
            }

            if (USN.charAt(0) != '1' && USN.charAt(0) != '2') {
                System.out.println(USN.charAt(0));
                throw new InvalideUSN("USN is not compling to the format");
            }
            char SS4 = USN.charAt(3);

            if (!Character.isDigit(SS4))
                throw new InvalideUSN("USN does not comply to the digital code");

            char SS5 = USN.charAt(4);

            if (!Character.isDigit(SS5))
                throw new InvalideUSN("USN does not comply to the digital code");


            String SS67 = USN.substring(5, 7);


            String[] codes = { "CS", "IS", "EC", "ME" };
            boolean present = false;
            for (int i = 0; i < codes.length; i++) {
                if (SS67.equals(codes[i])) {
                    present = true;
                }
            }
            if (!present)
                throw new InvalideUSN("USN does not comply to the accepted codes");

            for (int i = 7; i < 10; i++)
                if (!Character.isDigit(USN.charAt(i)))
                    throw new InvalideUSN("USN does not comply to the digital code");

            System.out.println("USN is valid");
        } catch (Exception err) {
            System.out.println(err);
        } finally {
            sc.close();
        }
    }
}
