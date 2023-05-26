import java.util.Stack;

class CollectionFramework {
  public static void main(String[] args) {
    Stack<Integer> demo = new Stack<>();
    demo.push(0);
    demo.push(1);
    demo.push(2);
    demo.push(3);
    demo.push(4);
    demo.pop();
    System.out.println(demo.search(90));
    System.out.println(demo.peek());
  
    if(demo.isEmpty()){
      System.out.println("Stack is empty");
    }else{
      System.out.println("stack is full");
    }
  }
}