import java.lang.*;

class Vehicle
{
    String color = "white";
    public Vehicle()
    {
        System.out.println("Vehicle Constructor");
    }
    void run()
    {
        System.out.println("Vehicle Started");
    }
}
class Car extends Vehicle
{
    String color = "Blue";
    public Car()
    {
        super();
        System.out.println("Car Constructor");
    }
    void run()
    {
        System.out.println("Vehile color  : "+super.color);
        System.out.println("Car color  : "+color);

        super.run();
        System.out.println("Car Started");
    }
}




public class SuperDemo {
    public static void  main(String args[])
    {
        Car c = new Car();
        c.run();
        
    }
}
