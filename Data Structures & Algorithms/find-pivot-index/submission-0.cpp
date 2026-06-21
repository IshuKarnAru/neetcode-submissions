class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        vector<int> prefix_;
        int total = 0;

        for (int n: nums){
            total += n;
            prefix_.push_back(total);
        }

        for (int pivot = 0; pivot < prefix_.size(); pivot++){
            int leftSum = pivot == 0 ? 0 : prefix_[pivot-1];
            int rightSum = prefix_.back() - prefix_[pivot];
            if (leftSum != rightSum){
                continue;
            }
            else {
                return pivot;
            }
        }
        return -1 ;
    }
};