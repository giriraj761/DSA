import java.util.Scanner;

// Q.9)
// A plastic manufacturer sells plastic in different shapes like 2D sheet
// and 3D box. The cost of sheet is Rs 40/ per square ft. and the cost of
// box is Rs 60/ per cubic ft. Implement it in Java to calculate the cost
// of plastic as per the dimensions given by the user where 3D inherits
// from 2D.

class _2d{

    int len,bre;
    public _2d(int length,int breath){

        this.bre=breath;
        this.len=length;
        System.out.println("the area of sheet: "+area()+" cubic feet");
        price();
    }
    float area()
    {
        return (float) len*bre;
    }
    void price()
    {
        System.out.println("price for 2d sheet: "+area()*40);
    }
}
class _3d extends _2d  {

    
    int hei;
    public _3d(int height,int length,int breath){
        super(length,breath);
        this.hei=height;
        System.out.println("the volume of the box is: "+volume()+" cubic feet");
        pricex();
    }
    float volume()
    {
        return (float) area()*hei;
    }
    void pricex()
    {
        System.out.println("price for 3d box: "+volume()*60);
    }
}

public class q9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int height,length,breath;
        System.out.println("enter the dimensions");
        
        length = sc.nextInt();
        breath = sc.nextInt();
        height = sc.nextInt();
        new _3d(height,length, breath);
        
        sc.close();
    }
}
