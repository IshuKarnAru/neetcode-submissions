class Solution {
    public int maxArea(int[] heights) {
        if (heights.length == 0) return 0;

        int i = 0;
        int j = heights.length - 1;
        int area = 0;
        int maxArea = 0;

        while (i < j) {
            area = (j-i) * Math.min(heights[i], heights[j]);
            maxArea = Math.max(maxArea, area);
            if(heights[i] < heights[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return maxArea;
    }
}
