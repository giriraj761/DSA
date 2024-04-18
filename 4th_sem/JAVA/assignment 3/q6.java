import java.util.Scanner;

// Q.6) Write a program in Java to define a
// class Rectangle having data member: length and breadth; to calculate the
// area and perimeter of the rectangle. Use constructor to read, and
// member functions to calculate and display.
class Rectangle {
    float length;
    float breadth;

    Rectangle() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length:");
        length = sc.nextFloat();
        System.out.println("Enter breadth:");
        breadth = sc.nextFloat();
        sc.close();

    }

    float area() {
        return length * breadth;
    }

    float perimeter() {
        return 2 * (length + breadth);
    }
}

public class q6 {
    public static void main(String[] args) {
        Rectangle rec = new Rectangle();
        System.out.println("Area: " + rec.area());
        System.out.println("Perimeter: " + rec.perimeter());
    }
}
