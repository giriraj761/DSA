

class Base {
   
    Base(int x){
        System.out.println("base class "+x*x);
    }
}
class child extends Base{
   
    child(int x)
    {
        super(x);
        System.out.println("child class "+x);
    }

}

public class q13 {

    public static void main(String[] args)
    {
        int x = 10;
        new child(x);
    }
}  