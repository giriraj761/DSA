import java.util.Scanner;

// Q.5)
// Write a program in Java which will overload the area () method and
// display the area of a circle, triangle and square as per user choice and
// user entered dimensions.

public class q5 {

    float area(int side) {
        return (float) side * side;
    }
     float area(float rad) {
        return (float) Math.PI * rad * rad;
    }
    float area(float base, float height) {
        return (float) 0.5 * base * height;
    }
   

    public static void main(String[] args) {

        q5 call = new q5();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter dimensions for square:");

        System.out.println(call.area(sc.nextInt()));

        System.out.println("Enter dimensions for triangle:");

        System.out.println(call.area(sc.nextFloat(), sc.nextFloat()));

        System.out.println("Enter dimensions for circle:");

        System.out.println(call.area(sc.nextFloat()));

        sc.close();
    }
}
