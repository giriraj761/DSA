public class q8 {

    static class Stack {
	    int top;
        int max;
	    int a[] = {10,20,30,40,50}; 

	    Stack()
	    {
	    	top = -1;
            max = 4;
	    }
	    void push(int x) throws fullException
	    {
	    	
            if(top > 4){
                    throw new fullException("overflow");
            }
            else{
	    		a[++top] = x;
	    		System.out.println(x + " pushed");
	    	}
            
	    }

	    void pop() throws EmpException
	    {
	    	
            if(max < 0){
                 throw new EmpException("underflow");
	    	}
	    	else {
	    		int x = a[max--];
	    		System.out.println(x +" ");
	    	}
	    }
    
    }


	public static void main(String args[])
	{
		Stack s = new Stack();
        int x = 0;

        try {
            s.push(100);
            s.push(200);
            s.push(300);
            s.push(400);
            s.push(500);
            // s.push(600);
        } catch (fullException e) {
            System.out.println(e);
        }
        System.out.println("pushed sucessfully");

        try {
            s.pop();
            s.pop();
            s.pop();
            s.pop();
            s.pop();
            s.pop();
            } catch (EmpException e) {
                System.out.println(e);
            }
		
	}


}
