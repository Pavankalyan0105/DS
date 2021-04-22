import java.lang.*;
class MultiLevel 
{
    public MultiLevel()
    {
        System.out.println("in MultiLevel ");
    }
}
class MultiLevelChild extends MultiLevel
{
    public MultiLevelChild()
    {
        System.out.println("in MultiLevel child");
    }
}

class MultiLevelDemo
{
    public static void main(String args[])
    {
        MultiLevelChild m = new MultiLevelChild();
    }
}
