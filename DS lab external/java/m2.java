class multi implements Runnable
{
    public void run()
    {
        System.out.println("Thread is in run method");
    }
}

public class m2 {
    public static void main(String[] args) {
        multi m1 = new multi();
        Thread t1 = new Thread(m1);
        t1.start();
    }   
}
