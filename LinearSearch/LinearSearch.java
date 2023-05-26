
import java.util.Arrays;

class LinearSearch{

  static int Linersearch(int[] arr ,int target , int start , int end ){
    if(arr.length == 0) 
    {
      return -1; 
    }
    for(int i =start; i<=end ; i++){
      int element = arr[i];
      if(element == target){
        return i;
      }
    }
return -1;
  }
  public static void main(String[] args) {
    int[] arr = { 10,23,1,4,5,2};
    int target =1;
    int ans = Linersearch(arr, target,0,4);
    System.out.println(ans);

    // String name = "Deepanshu";
    // char ch = 'a';
    // // System.out.println(search(name, ch));
    // System.out.println(Arrays.toString(name.toCharArray()));
  }

  // Q2 Search chr in String 

   static boolean search(String str , char ch){
    if(str.length()==0) return false;

    // for(int i =0 ; i< str.length();i++){
    //   if(ch ==str.charAt(i)){
    //     return true;
    //   }
    // }

    //  print to char array 
       for(char n : str.toCharArray()){
        if(n==ch){
          return true;
        }
       }
    return false ;
   }
}