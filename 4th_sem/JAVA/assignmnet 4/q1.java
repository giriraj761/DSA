abstract class student {
    int roll_no, reg_no;

    abstract void course(int regCour);

    abstract void print();
}

class kiitian extends student {
    kiitian(int roll_no) {
        this.roll_no = roll_no;
    }

    void course(int reg_no) {
        this.reg_no = Integer.parseInt(reg_no % 10000 + "" + roll_no % 10000);
    }

    void print() {
        System.out.println("Reg No: " + reg_no);
        System.out.println("Roll No: " + roll_no);
    }

}

class q1 {
    public static void main(String[] args) {
        student me = new kiitian(20051973);
        me.course(1234);
        me.print();
    }
}