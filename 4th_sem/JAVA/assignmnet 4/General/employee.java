package General;

public class employee {
    protected int empid;
    private String ename;
    public int b_salary;

    public employee(String ename, int empid) {
        this.ename = ename;
        this.empid = empid;
    }

    public void show() {

        System.out.println("Name " + ename);
        System.out.println("Name " + empid);
    }

    public double earning() {
        return 1.95 * b_salary;
    }
}
