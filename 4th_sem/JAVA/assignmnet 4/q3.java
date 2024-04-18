interface employee {

    public void earnings();

    public void deductions();

    public void bonus();

}

class Manager implements employee {
    double basic;
    double earn;
    double dedcc;
    double bns;

    public void earnings() {
        earn = 1.95 * basic;
        System.out.println("Earning: " + earn);
    }

    public void deductions() {
        dedcc = .12 * basic;
        System.out.println("Deductions: " + dedcc);
    }

    public void bonus() {
    }
}

class Substaff extends Manager {

    Substaff(int pay) {
        basic = pay;
    }

    public void bonus() {
        bns = .5 * basic;
        System.out.println("Bonus: " + bns);
    }
}

class q3 {
    public static void main(String[] args) {
        Substaff emp = new Substaff(20000);
        emp.earnings();
        emp.deductions();
        emp.bonus();
    }
}