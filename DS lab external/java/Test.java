class Consumer
{
        int amount = 1000;
        synchronized void withdraw(int amount){

           
            System.out.println("Going to withdraw ..........");
            
            if(this.amount < amount){
                System.out.println("Less Balance waiting to deposit...   ");
                try{wait();} catch(Exception e){}
                System.out.println("withdraw completed");

            }
        }

        synchronized void deposit(int amount){
            System.out.println("Going to deposit ..........");
            this.amount+=amount;
            System.out.println("deposit completed");
            notify();
        }
}



public class Test{
    public static void main(String args[]){
        Consumer c = new Consumer();
        new Thread(){
            public void run(){
                c.withdraw(10000);
            }
        }.start();
        new Thread(){
            public void run(){
                c.deposit(10000);
            }
        }.start();
    }
}