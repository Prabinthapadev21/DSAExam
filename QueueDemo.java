import java.util.Scanner;

class QueueCalculation
{
    int queue[]= new int[size];
    int front=-1,rear=-1,value;
}
public class QueueDemo {
    static final int size =5;
    int queue[]= new int[size];
    int front=-1,rear=-1,value;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("performing Queue Opeartion");
        while (true)
        {
            int choice;
            System.out.println("Select the following choice");
            System.out.println("1.Enqueue");
            System.out.println("2.Dequeue");
            System.out.println("3.Display");
            System.out.println("4.Exit");
            System.out.println("Enter your choice:");
            choice = sc.nextInt();
            switch (choice)
            {
                case 1:
                    enqueue();
                    break;
                case 2:
                    dequeue();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    System.out.println("Exiting the program");
                    return;
                default:
                    System.out.println("Please enter the correct choice");
            }
        }
    }
}
