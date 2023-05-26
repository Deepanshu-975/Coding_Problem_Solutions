import java.util.Scanner;

public class MinMax {
  public static void main(String[] args) {
    Scanner sc =new Scanner(System.in);
    System.out.println("Enter three numbers ");
    int a = sc.nextInt();
    int b = sc.nextInt();
    System.out.println(Sum(a, b));
    

    // Logic 
    // if(a>b){
    //   if(a>c){
    //     System.out.println(a+" A is Greatest ");
    //   }
    // }else if(b>c){
    //   System.out.println(b +" B is Greates ");
    // }
    // else{
    //   System.out.println(c" C is Gratest");
    // }
  }

  //  sum 4return method ;
  static int Sum(int a,int b){
    int c = a+b;
    return c;
    }
  
}
