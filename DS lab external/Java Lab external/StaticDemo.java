import java.lang.*;
public class StaticDemo {
    
    static int a;
    static int b;
    static{
        a=34;
        b=45;
    } 
    static void m1()
    {
        System.out.println("In Static method m1");
    }
    public static void main(String args[])
    {
        m1();
        System.out.println("a "+a+"  b "+b);
    }
}
