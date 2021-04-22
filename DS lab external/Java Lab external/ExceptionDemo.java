public class ExceptionDemo
{
    public static void main(String args[])
    {
        try{
            // System.out.println(34/0);
            int arr[] = {4,3};
            System.out.println(arr[3]);
        }
        catch(ArithmeticException e)
        {
            System.out.println(e);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e);

        }
        finally{
            System.out.println("Im in Finally block ");
        }
    }
}
