public class q4 {

    static void processinput(int a) throws negitivenumberexception{
        if(a<0){
            throw new negitivenumberexception("negitive number");
        }
        System.out.println(a*2);
    }
        public static void main(String[] args) {

            int a= -11;
            try {
                processinput(a);
            } catch (negitivenumberexception e) {
                System.out.println(e); 
            }
        }
}
