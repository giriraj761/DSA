import java.awt.*;
import java.awt.Robot;

class bot
{
    int delayAfterWord=0;
    int delayAfterLetter=10;
    Robot rob;
    void main()
    throws AWTException
    {
        String messages[]={"Hello how are you.","Hope to see you soon"};
        rob=new Robot();
        rob.delay(5000);
        int numberOfMessage=0;
        while(numberOfMessage<=200)
        {
            for(int i=0;i<messages.length;i++)
            {
                type(messages[i],true);
                rob.delay(0);
            }
             rob.delay(delayAfterWord);
             numberOfMessage++;
        }
    }
    void type(String str,boolean enter)throws AWTException
    {
        for(int i =0;i<str.length();i++)
        {
            char c=str.charAt(i);
            
            rob.delay(delayAfterLetter);
            if(Character.isLowerCase(c))
            {
                c=Character.toUpperCase(c);
                rob.keyPress(c);
                rob.keyRelease(c);
                continue;
            }
            else if(Character.isUpperCase(c))
            {
                rob.keyPress(16);
                rob.keyPress(c);
                rob.keyRelease(c);
                rob.keyRelease(16);
                continue;
            }   
            
            rob.keyPress(c);
            rob.keyRelease(c);
        }
        if(enter)
        {
            rob.keyPress(10);
        }
    }
}
