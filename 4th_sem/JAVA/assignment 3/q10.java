// Q.10) Illustrate the execution of constructors in
// multi-level inheritance with three Java classes – plate(length, width),
// box(length, width, height), wood box (length, width, height, thick)

class plate {
    float length;
    float width;

    plate(float length, float width) {
        this.length = length;
        this.width = width;
    }

    void display() {
        System.out.println("Length: " + length);
        System.out.println("Width: " + width);
    }
}

class box extends plate {
    float height;

    box(float length, float width, float height) {
        super(length, width);
        this.height = height;
    }

    void display() {
        super.display();
        System.out.println("Height: " + height);
    }
}

class wood_box extends box {
    float thick;

    wood_box(float length, float width, float height, float thick) {
        super(length, width, height);
        this.thick = thick;
    }

    void display() {
        super.display();
        System.out.println("Thickness: " + thick);
    }
}

public class q10 {
    public static void main(String[] args) {
        System.out.println("\nPlate");
        new plate(12, 3).display();

        System.out.println("\nBox");
        new box(12, 3, 5).display();

        System.out.println("\nWoodbox");
        new wood_box(1, 3, 12, 3).display();

    }
}
