class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        
        int count = 0;
        int totalSum = 0;

        for (int i = 0; i < k; i++){
            totalSum = totalSum + arr[i];
        }

        int i = 0;
        int j = (k-1);

        while (j < arr.length){
            if (totalSum >= threshold * k){
                count++ ;
            }
            if(j+1 < arr.length){
                totalSum = totalSum - arr[i++] + arr[++j];
            }
            else {
                return count ;
            }
        }
        return count;
    }
}