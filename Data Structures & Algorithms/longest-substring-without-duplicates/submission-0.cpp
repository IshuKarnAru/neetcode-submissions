class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        string subStr;
        int windowSize = 0;
        int maxWindowSize = 0;
        int startIndex = 0;

        for (int right = 0; right < s.size(); right++){
            size_t found = subStr.find(s[right]);
            if (found != string::npos){
                subStr.erase(0, found + 1);
                left += found + 1;
            }
            subStr.push_back(s[right]);

            windowSize = right - left + 1;

            if (windowSize > maxWindowSize){
                maxWindowSize = windowSize;
                startIndex = left;
            }
        }
        return maxWindowSize;
    }
};
