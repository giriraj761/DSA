public class q7 {

    static void withdrawl(int a) throws lessBalanceException{
        if(a<500){
            throw new lessBalanceException("withdraw amount is not valid");
        }
        else{
            System.out.println("sucess amount "+a);
        }
    }
    public static void main(String[] args) {
        try{
            withdrawl(4050);
        }catch(lessBalanceException e){
            System.out.println(e);
        }
    }
}
