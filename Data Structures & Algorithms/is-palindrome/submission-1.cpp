class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        t.reserve(s.size());
        for (char c : s) {
            if (std::isalnum(static_cast<unsigned char>(c))) {
                t.push_back(static_cast<char>(std::tolower(static_cast<unsigned char>(c))));
            }
        }
        int left = 0;
        int right = (int)t.size() - 1;
        while (left < right) {
            if (t[left] != t[right]) return false;
            ++left;
            --right;
        }
        return true;
    }
};