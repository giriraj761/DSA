import java.util.*;

class q1 {
    public static void main(String[] args) {

        Vector<Integer> vctr1 = new Vector<>();
        vctr1.add(5);
        vctr1.add(3);
        vctr1.add(4);
        vctr1.add(9);
        System.out.println("\nElements of Vector 1 are:");
        for (Integer value : vctr1) {
            System.out.print(value+" ");
        }

        Vector<Integer> vctr2 = new Vector<>();
        for (Integer value : vctr1) {
            vctr2.add(value);
        }

        System.out.println("\nElements of Vector 2 are:");
        for (Integer value : vctr2) {
            System.out.print(value+" ");
        }

        vctr1.addAll(vctr2);

        System.out.println("\nthe elements in revers order are :");
        for (int i = vctr1.size() - 1; i >= 0; i--) {
            System.out.print(vctr1.get(i)+" ");
        }

    }
}