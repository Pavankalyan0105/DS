class ThrowsExc
{
   static void fun() throws InterruptedException
   {
        Thread.sleep(1000);
        System.out.println("Hello ");
        throw new InterruptedException("Interruption occured  ");
    }
   public static void main(String args[])
   {
        try{
            fun();
        }
        catch(InterruptedException e)
        {
            System.out.println(e);
        }
   }
}