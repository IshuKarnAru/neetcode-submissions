class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int L = 0;
        int currSum = 0;
        int length = INT_MAX;

        for (int R = 0; R < nums.size(); R++){
            currSum += nums[R];
            while(currSum >= target){
                currSum -= nums[L];
                length = min( R-L+1 , length);
                L++;
            }
        }
        if (length == INT_MAX){
            return 0;
        }
        return length;
    }
};