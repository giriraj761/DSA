public class q2 {
    

    static void methods(int a) throws Exception{

        if(a<100){
            throw new ArithmeticException("small");
        }

        if(a>1000){
            throw new Exception("big");
        }

    } 
    
    public static void main(String[] args) {
    try {
                methods(1212);//methods(1212);
            } catch (ArithmeticException e) {
                System.out.println(e); 
            }catch(Exception e){
                System.out.println(e);
            }
    }
}
