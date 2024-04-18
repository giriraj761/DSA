public class q5 {
     int hr;
     int min;
     int sec;

    q5(int hr,int min,int sec){
        this.hr=hr;
        this.min=min;
        this.sec=sec;
    }

    void checkexp() throws Exception{

        if(hr<0 || hr>24){
            throw new hrsexception("incorrect hour");
        }
        if(min<0 || min>60){
            throw new minexception("incorrect minute");
        }
        if(sec<0 || sec>60){
            throw new secexception("incorrect second");
        }
    }

    public static void main(String[] args) {
        q5 obj = new q5(-1,23,34);
        q5 obj1 = new q5(1,-23,34);
        q5 obj2 = new q5(1,23,-34);


        try {
            obj.checkexp();
        } catch (Exception e) {
            System.out.println(e);
        }
            try {
                obj1.checkexp();
            } catch (Exception e) {
                System.out.println(e);
            }

            try {
                obj2.checkexp();
            } catch (Exception e) {
                System.out.println(e);
            }

    }
}
