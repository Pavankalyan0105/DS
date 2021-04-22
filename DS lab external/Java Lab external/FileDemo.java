import java.io.FileWriter;

import java.io.*;
import java.lang.*;
public class FileDemo 
{
    public static void main(String args[]) throws IOException
    {
        String str = "File Handling in java";
        FileWriter fw  = new FileWriter("output.txt");
        for(int i=0;i<str.length();i++)
            fw.write(str.charAt(i));

        System.out.print("Success");
        fw.close();
    }    
}
