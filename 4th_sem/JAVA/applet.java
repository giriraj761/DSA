import java.applet.Applet;
import java.awt.*;

public class q5 extends Applet {
    public void paint(Graphics g) {
        g.drawRect(50, 10, 70, 30);
        g.setColor(Color.blue);
        g.fillRect(50, 50, 200, 100);
        g.setColor(Color.black);
        g.fillRect(70, 70, 160, 60);
        g.setColor(Color.yellow);
        g.fillRect(90, 90, 120, 20);
        g.setColor(Color.orange);
        g.drawRoundRect(50, 200, 100, 50, 15, 15);
        g.setColor(Color.pink);
        g.fill3DRect(50, 300, 100, 50, true);
    }
}