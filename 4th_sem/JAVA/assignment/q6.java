
public class q6 {
    public static void main(String[] args) {

        int a, count = 0, sumsq = 0;
        
        System.out.println("enter some numbers");

        for (int i = 0; i < args.length; i++) {
            a = Integer.parseInt(args[i]);
            count++;
            sumsq += a * a;
        }

        try {
            if (count < 5) {
                throw new CheckArgument("Arguments are greater than 5");
            } else {
                System.out.println(sumsq);
            }
        } catch (CheckArgument e) {
            System.out.println("Caught less than 4 numbers");
        }
    }
}
