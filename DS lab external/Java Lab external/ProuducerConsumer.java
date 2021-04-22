class Counter
{
    int a=0;
    public  synchronized void increment()
    {
        a++;
    }
}
class ProuducerConsumer
{
    public static void main(String args[])
    {
        Counter c = new Counter();
        Thread t1 = new Thread(new Runnable(){
            public void run(){
                for(int i=0;i<1000;i++)
                c.increment();

            }
        });

        Thread t2 = new Thread(new Runnable(){
            public void run(){
                for(int i=0;i<1000;i++)
                 c.increment();

            }
        });

        t1.start();
        t2.start();
        try{
            t1.join();
            t2.join();
            // t1.sleep(20000);
        }
        catch(Exception e){};

        System.out.println(c.a);
        
    }    
}
