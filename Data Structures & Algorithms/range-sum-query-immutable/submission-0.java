class NumArray {

    List<Integer> numArray;

    public NumArray(int[] nums) {
        int total = 0;
        numArray = new ArrayList<Integer>();
        for (int n: nums){
            total += n;
            numArray.add(total);
        }
    }
    
    public int sumRange(int left, int right) {
        int preRight = numArray.get(right);
        int preLeft = left > 0 ? numArray.get(left-1) : 0 ;
        return (preRight - preLeft);
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */