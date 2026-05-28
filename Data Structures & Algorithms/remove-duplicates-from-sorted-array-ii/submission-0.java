class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;

        int i = 2;
        int k = 2;

        while (i < nums.length){
            if(nums[i] != nums[k-2]){
                nums[k] = nums[i];
                k++;
            }
            i++;
        }
        return k;
        
    }
}