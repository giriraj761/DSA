//Q.2) Write a program in Java to accept 10 numbers from command line and check how many of them are even and how many odd.

public class q2 {
    public static void main(String[] args) {

        if (args.length == 10) {
            for (int i = 0; i < 10; i++) {
                System.out.println(args[i] + " is " + (Integer.parseInt(args[i]) % 2 == 0 ? "even" : "odd"));
            }
        } else {
            System.err.println("10 parameters required");
        }
    }
}
