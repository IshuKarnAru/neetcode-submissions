class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        
        int L = 0;
        int currSum = 0;
        int length = Integer.MAX_VALUE;
        for (int R = 0; R < nums.length; R++){
            if (R <= nums.length - 1){
                currSum += nums[R];
                while(currSum >= target){
                length = Math.min( R-L+1 , length);
                currSum -= nums[L];
                L++;
                }
            }
        }
        if (length == Integer.MAX_VALUE){
            return 0;
        }
        return length;
    }
};