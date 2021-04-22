import java.lang.*;
class Fibonacci
{
    public static int Fibonacci1(int n)
    {
        int[] arr;
        arr = new int[n];
        arr[0] = 1;
        arr[1] = 1;
        for(int i=2;i<n;i++)
        {
            arr[i] = arr[i-1]+arr[i-2];
        }
        return arr[n-1];
    }

    public static int fibrec(int n)
    {
        if(n<3) 
            return 1;
            return fibrec(n-1)+fibrec(n-2);
    }
    public static void main(String args[])
    {
        System.out.println(Fibonacci1(8));
        System.out.println(fibrec(8));

    }
}