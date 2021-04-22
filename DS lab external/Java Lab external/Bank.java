import java.util.*;
import java.lang.*;
public class Bank {
    String accNo;
    String name;
    long balance;

    public void openAccount()
    {
        Scanner sc = new Scanner(System.in);
        accNo    = sc.next();
        name     = sc.next();
        balance  = sc.nextLong();
    }
    public void showAccount()
    {
        System.out.println("Details are  :  ");
        System.out.println(accNo);
        System.out.println(name);
        System.out.println(balance);
    }

    public static void main(String args[])
    {
        Bank b1 = new Bank();
        b1.openAccount();
        b1.showAccount();
    }
}

