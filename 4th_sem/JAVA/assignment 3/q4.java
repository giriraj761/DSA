import java.util.Scanner;

//Q.4) Write a program in Java to overload subtract method with various parameters in a class.
public class q4 {
    static float subtract(float a, float b) {
        return a - b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }

    static float subtract() {
        Scanner sc = new Scanner(System.in);
        float a = sc.nextFloat();
        float b = sc.nextFloat();
        sc.close();
        return a - b;
    }

    public static void main(String[] args) {

        System.out.println("Subtract with no param");
        System.out.println(subtract());
        System.out.println("Subtract with float param");
        System.out.println(subtract(10f, 11.43f));
        System.out.println("Subtract with int param");
        System.out.println(subtract(3, 2));
    }
}
