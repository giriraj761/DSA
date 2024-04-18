import java.util.Scanner;

// Q.8) Write a program in
// Java to create a class MyVolume with required data members and find the
// volume of cube, cuboid and sphere using constructor overloading.

class MyVolume{

    int areacuboid;
    int areacube;
    int areasphere;
    MyVolume(int l)
    {
        System.out.println(l*l*l);
    }
    MyVolume(int l,int b,int h)
    {
        System.out.println( 2*(l*b+l*h+h*b));
    }
    MyVolume(int r ,float x)
    {
        System.out.println( 0.75*r*r*x);
    }
}
public class q8 {
       public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);
            // new MyVolume();
           System.out.println("enter the dimensions (length/breath/height): \n where length will be considered as radius for sphere");
           int l,b,h;
           l=sc.nextInt();
           b=sc.nextInt();
           h=sc.nextInt();
           new MyVolume(l,(float)Math.PI);
           new MyVolume(l);
           new MyVolume(l,b,h);

       }
}
