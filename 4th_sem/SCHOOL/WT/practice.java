import java.util.Scanner;

public class practice{
    public static void main(String[] args) {
        // // System.out.println(a);
        // stat ob1 = new stat();
        // stat ob2 = new stat();

        int a ,b;
        Scanner sc = new Scanner(System.in);

        for(int i=0;i<2;i++)
        {
            a= sc.nextInt();
            b = sc.nextInt();

            try{
                if(b==0)
                {
                    throw new Exception("divide by zero");
                }
                System.out.println(a/b);
            }
            catch(Exception e){
                System.out.println(e);
            }
        }
    }
}

class stat{
    int a=0;
    stat(){
        a++;
        System.out.println(a);
    }
}
