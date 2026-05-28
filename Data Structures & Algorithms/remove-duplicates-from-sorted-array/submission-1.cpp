class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int left = 0;
        int right = nums.size() - 1;

        while (left < right){

            while (left + 1 < nums.size() && nums[left] == nums[left+1]){
                nums.erase(nums.begin() + left);
                right--;
            }
            while (right > 0 && right < nums.size() && nums[right] == nums[right-1]){
                nums.erase(nums.begin() + right);
                right--;
            }
            left++;
            right--;
        }
        int k = nums.size();
        return k;
    }
};