public class q2b {
    public static void main(String[] args) {
        int dec[] = { 2, 3, 1, 4 };
        Number n = new Number(10, dec);
        System.out.println(n.mult(10));
        n.show();
    }
}

class Number {
    int integer, decimal[];

    Number(int i, int d[]) {
        integer = i;
        decimal = d;
    }

    int mult(int n) {
        int carry = 0;
        for (int i = decimal.length - 1; i >= 0; i--) {
            decimal[i] *= n;
            decimal[i] += carry;
            carry = decimal[i] / 10;
            decimal[i] %= 10;
        }
        integer *= n;
        integer += carry;
        return integer;
    }

    void show() {
        System.out.print(integer + ".");
        for (int i : decimal)
            System.out.print(i);

        System.out.println();
    }
}