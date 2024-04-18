// Q.12)
// Write a program to create an Account class containing acc_no, balance
// as data members and disp() to display the details. Inherit it in Person
// class with all mentioned data members and functions. Person class also
// has name and aadhar_no as extra data members of its own. Override disp()
// function. Create 5 persons‟ details.
class Account {
    int acc_no;
    float balance;

    Account(int acc_no, float balance) {
        this.acc_no = acc_no;
        this.balance = balance;
    }

    void display() {
        System.out.println("Acc no: " + acc_no);
        System.out.println("Balance: " + balance);
    }

}

class Person extends Account {
    String Name;
    int aadhar_no;

    Person(String Name, int aadhar_no) {
        super(0, 0);
        this.Name = Name;
        this.aadhar_no = aadhar_no;
    }

    Person(String Name, int aadhar_no, int acc_no, float balance) {
        super(acc_no, balance);
        this.Name = Name;
        this.aadhar_no = aadhar_no;
    }

    void display() {
        System.out.println("Name: " + Name);
        System.out.println("Aadhar No: " + aadhar_no);
        super.display();
    }
}

public class q12 {
    public static void main(String[] args) {
        Person p = new Person("GIRIRAJ KRISHNA SHARMA ", 121212121, 8348, 1000000);
        p.display();
    }
}
