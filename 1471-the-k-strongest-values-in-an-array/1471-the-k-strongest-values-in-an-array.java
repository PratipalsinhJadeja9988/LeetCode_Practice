import java.util.Arrays;

class Solution {
    public int[] getStrongest(int[] arr, int k) {

        Arrays.sort(arr);
        
        int n = arr.length;
        int m = arr[(n - 1) / 2];
        
        int[] result = new int[k];
        int left = 0;
        int right = n - 1;
        int index = 0;
  
        while (index < k) {
            int leftDiff = Math.abs(arr[left] - m);
            int rightDiff = Math.abs(arr[right] - m);
            
            if (rightDiff >= leftDiff) {
                result[index++] = arr[right];
                right--;
            } else {
                result[index++] = arr[left];
                left++;
            }
        }
        
        return result;
    }
}