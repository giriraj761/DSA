public class q1 {

    public static void main(String[] args) {

        int arr[]={12,23,54,65};
        try {
            System.out.println(arr[10]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("array out of bound");
        }
    }
}