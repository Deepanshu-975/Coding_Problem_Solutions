import java.util.*;
public class Second {
  
  public static void main(String[] args) {
    int[][] arr = { 
       {23,4,690},
       {18,2,56,7},
       {26, 78,90,4},
       {19,12}
    };
    int target = 7;
    int[] ans = search(arr ,target);
    System.out.println(Arrays.toString(ans));

    System.out.println(max(arr));
  }
// Q1 Function to find the minimum value 
  static int minVal(int[] arr){
    int ans = arr[0];
    for(int i=0;i<arr.length;i++){
      if(arr[i] < ans){
        ans = arr[i];
      }
    }
return ans;
  }

  // Q2 search the element in  2d array 
  static int[] search(int[][] arr,int target){
    for(int row =0 ; row< arr.length;row++){
      for(int col = 0; col< arr[row].length;col++){
        if(arr[row][col] == target){
           return new int[]{row,col};
        }
      }
    }
    return new int[]{-1,-1};

  }

  // Q3 find Maximum in 2d Array 
  static int max(int[][] arr){
    int max =Integer.MIN_VALUE;
    for(int[] ints : arr){
      for(int an : ints){
        if(an > max )
        max = an;
      }
    }
    return max;
  }


}
