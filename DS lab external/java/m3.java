public class m3 extends Thread{

    public void run()
    {
        System.out.println(Thread.currentThread().getPriority());
        System.out.println(Thread.currentThread().getName());

    }
    public static void main(String[] args) {
        m3 t1  = new m3();
        m3 t2  = new m3();
        m3 t3  = new m3();
        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.NORM_PRIORITY);
        t3.setPriority(Thread.MAX_PRIORITY);

        t1.start();
        t2.start();
        t3.start();


    }
}
