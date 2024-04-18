import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.*;
import java.io.*;

public class q2 {
    public static void main(String[] args) throws Exception {
        File f = new File("q2.txt");
        String content = "";
        Scanner sc = new Scanner(f);
        while (sc.hasNext()) {
            content += sc.nextLine().replace("#", "*") + "\\";
        }
        // System.out.println(content);

        Files.write(Paths.get("q2new.txt"), content.getBytes());
    }
}