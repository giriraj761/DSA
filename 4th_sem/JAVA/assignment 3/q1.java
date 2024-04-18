//Q.1) Write a program in Java to find the largest among 3 user entered nos. through command line.
class q1 {
    public static void main(String[] args) {
        if (args.length == 3) {
            int a = Integer.parseInt(args[0]);
            int b = Integer.parseInt(args[1]);
            int c = Integer.parseInt(args[2]);
            System.out.println("Largest number is : " + ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)));
        } else {
            System.err.println("Enter 3 numbers in parameter");
        }
    }
}