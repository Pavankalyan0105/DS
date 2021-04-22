class ThrowExc
{
    public static void main(String args[])
    {
        try
        {
            System.out.println("Inside Try");

            throw new ArithmeticException("demo");
        }
        catch(ArithmeticException e)
        {
            System.out.println("Inside Catch");
            System.out.println(e);
        }
    }
}