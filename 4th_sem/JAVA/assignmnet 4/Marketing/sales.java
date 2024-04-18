package Marketing;

import General.employee;

public class sales extends employee {
    public sales(String name, int empid, int pay) {
        super(name, empid);
        b_salary = pay;

    }

    public double tallowance() {
        return 0.5 * earning();
    }

    public void show() {
        super.show();
        System.err.println("Earning: " + earning());
        System.out.println("Travel allowance: " + tallowance());
    }
}
