class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder t = new StringBuilder();

        for (char c : s.toCharArray()){
            if (Character.isLetterOrDigit((char)c)){
                t.append(Character.toLowerCase(c));
            }
        }
        int left = 0;
        int right = t.length()-1 ;

        while (left < right){
            if (t.charAt(left) != t.charAt(right)){
                return false;
            }
            left++;
            right--;    

        }
        return true;
    }
}
