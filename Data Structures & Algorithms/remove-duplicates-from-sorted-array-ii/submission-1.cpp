class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int i = 2;
        int j = 2;

        while(i < nums.size()){
            if(nums[i] != nums[j-2]){
                nums[j] = nums[i];
                j++;
            }
            i++;
        } 
        return j;
    }
};