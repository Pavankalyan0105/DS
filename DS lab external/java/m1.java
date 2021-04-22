class multi extends Thread
{
    public void run()
    {
        System.out.println("Thread is in run method");
    }
}

public class m1 {
    public static void main(String[] args) {
        multi t1 = new multi();
        t1.start();
    }   
}
