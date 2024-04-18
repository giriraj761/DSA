public class q2c {
    static char words[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    public static void main(String[] args) {
        int dec[] = { 2, 3, 1, 4 };
        Number n = new Number(16, dec);
        n.show();
        Number decPart = new Number(0, n.decimal);
        char hexDec[] = new char[dec.length];
        for (int i = 0; i < hexDec.length; i++) {
            hexDec[i] = words[decPart.mult(16)];
            decPart.integer = 0;
        }
        int temp = n.integer;
        String s = "";
        while (temp > 0) {
            s = words[temp % 16] + s;
            temp /= 16;
        }
        System.out.print("Hex: " + s + ".");
        for (int i = 0; i < hexDec.length; i++) {
            System.out.print(hexDec[i]);
        }
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