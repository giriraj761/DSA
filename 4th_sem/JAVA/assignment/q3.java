public class q3 {
    public static void main(String[] args) {
        int arr[]={10,23};
        int a = 0;
        try {
            a= arr[10];
        } catch (Exception e) {
            e.printStackTrace();
        }finally{
            System.out.println("finally block");
        }
    }
}
