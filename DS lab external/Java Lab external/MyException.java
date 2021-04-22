public class MyException extends Exception
{
    public MyException(String msg)
    {
        // super();
        System.out.println(msg);
    }
    public static void main(String args[])
    {
        try{
            int a=3;
                if(a<10)
                    throw new MyException("Error");
                }
            catch(MyException e)
            {
                System.out.println(e);
            }
    }
}
