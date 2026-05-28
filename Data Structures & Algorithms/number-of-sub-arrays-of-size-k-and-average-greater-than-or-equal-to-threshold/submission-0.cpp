class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        vector<vector<int>> ans;
        int totalSum = 0, count = 0;

        for (int i = 0; i < k; i++){
            totalSum = totalSum + arr[i];
        }

        int i = 0, j = (k-1);

        while(j < arr.size()){
            if (totalSum >= threshold * k){
                count++ ;
            }
            totalSum = totalSum - arr[i++] + arr[++j];
        }
        return count;
    }
};