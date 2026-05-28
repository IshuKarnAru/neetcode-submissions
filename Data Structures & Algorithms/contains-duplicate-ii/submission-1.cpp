class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int> set;
        int i = 0;

        for(int j = i; j < nums.size(); j++){
            if(j-i>k){
                set.erase(nums[i]);
                i++;
            }
            if(set.count(nums[j]) > 0){
                return true;
            }
            set.insert(nums[j]);
        }
        return false;
    }
};