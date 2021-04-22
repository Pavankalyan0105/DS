public class Constructor {

    public Constructor()
    {
        System.out.println("No param");
    }
    public Constructor(int a)
    {
        System.out.println("Parameter  "+a);
    }
    public static void main(String args[])
    {
        Constructor c = new Constructor(4);

    }
}
