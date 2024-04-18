import java.util.Scanner;

// Q.7) Write a program in
// java to input the details of a student having roll, name, full_mark and
// secured_mark as data members using constructor, then calculate the CGPA
// and display the details of student with CGPA.
class Student {
    String Name;
    int roll;
    float full_marks;
    float secured_mark;

    Student(String Name, int roll, float full_marks, float secured_mark) {
        this.Name = Name;
        this.roll = roll;
        this.full_marks = full_marks;
        this.secured_mark = secured_mark;
    }

    float CGPA() {
        return (float)(secured_mark / full_marks) * 10.526f;
    };

    void display() {
        System.out.println("Name: " + this.Name);
        System.out.println("Roll: " + this.roll);
        System.out.println("Full Marks: " + this.full_marks);
        System.out.println("Secured Mark: " + this.secured_mark);
        System.out.println("CGPA: " + CGPA());
    }
}

public class q7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name roll full marks and secured marks");
        Student s = new Student(sc.nextLine(), sc.nextInt(), sc.nextFloat(), sc.nextFloat());
        s.display();
        sc.close();
    }

}
