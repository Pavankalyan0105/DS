import java.lang.String;
import java.util.Scanner;
// Stack class with it"s implementation
class Stack{
    private int arr[];
    private int top;
    private int CAPACITY;
    Stack(int size){
        arr = new int[size];
        CAPACITY = size;
        top = -1;
    }

    public boolean isFull(){
        if(top == CAPACITY)
            return true;
        return false;
    }

    public boolean isEmpty(){
        if(top==-1)
            return true;
        return false;
    }

    //push operation
    public void push(int data){
        if(isFull()) 
            System.out.println("Stack overflow");
        else 
            arr[++top] = data; 
    }

    //pop operationt
    public void pop(){
        if(isEmpty())
            System.out.println("Stack Underflow");
        else
            --top;
    }

    public void traverse(){
        int temp = top;
        System.out.println("Stack elements are");
        while(temp != -1)
        {
            System.out.println(arr[temp]);
            temp--;
        }
    }

    public int peek(){
        if(top == -1)
            {System.out.println("Stack underflow");
            return -1;}
    
        return arr[top];

    }

    // public int min(){
        // Stack temp_stack = new Stack(5);
        // // System.out.println(top +" and" +temp_stack.top);
        // int temp = top;
        // int minimum_ele = 232323;
        // while(temp!=-1)
        // {
        //     if(arr[temp] < minimum_ele)
        //         temp_stack.push(arr[temp]);
        // }
    // }
}


class minStack{
    public static void main(String args[]){
        
        Stack s1         = new Stack(5);
        Stack temp_stack = new Stack(5);
        int minimum_ele  = 9999999;
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter elements");
        for(int i=0;i<5;i++){
            s1.push(sc.nextInt());
            if(s1.peek() < minimum_ele){
                temp_stack.push(s1.peek());
                minimum_ele = s1.peek();
            }
            else 
                temp_stack.push(minimum_ele); 
        }

        s1.traverse();
        System.out.println("Minimum element is "+ temp_stack.peek());
        temp_stack.traverse();
    }    
}
