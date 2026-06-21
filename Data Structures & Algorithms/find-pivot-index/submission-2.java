class Solution {
    public int pivotIndex(int[] nums) {
        
        List<Integer> prefixSum = new ArrayList<Integer>();
        int total = 0;

        for (int n : nums){
            total += n;
            prefixSum.add(total);
        }

        for (int pivot = 0; pivot < prefixSum.size() ; pivot++){
            int leftSum = pivot == 0 ? 0 : prefixSum.get(pivot - 1);
            //int rightSum = prefixSum.getLast() - prefixSum.get(pivot);
            int rightSum = prefixSum.get(prefixSum.size() - 1) - prefixSum.get(pivot);

            if (leftSum != rightSum){
                continue;
            }
            else {
                return pivot;
            }
        }
        return -1;
    }
}