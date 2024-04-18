// Q.11)
// Write a program in java to define a class Shape which has data member
// „area‟ and a member function showArea(). Derive two classes Circle and
// Rectangle from Shape class. Add appropriate data members and member
// functions to calculate and display the area of Circle and Rectangle.
class Shape {
    float area;

    void showArea() {
        System.out.println("Area is : " + area);
    }
}

class Circle extends Shape {
    float radius;

    Circle(float radius) {
        this.radius = radius;
    }

    void calculateArea() {
        area = (float) Math.PI * radius * radius;
    }
}

class Rectangle extends Shape {
    float length;
    float breadth;

    Rectangle(float length, float breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    void calculateArea() {
        area = length * breadth;
    }
}

public class q11 {
    public static void main(String[] args) {
        Circle c = new Circle(4);
        System.out.println("Area Circle: ");
        c.calculateArea();
        c.showArea();
        Rectangle r = new Rectangle(7, 3);
        System.out.println("Area Rectangle: ");
        r.calculateArea();
        r.showArea();
    }
}
