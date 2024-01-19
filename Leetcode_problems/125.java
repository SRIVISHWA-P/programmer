//valid Palindrome

class Solution {
    public boolean isPalindrome(String s) {
        int fwd = 0;
        int bwd = s.length() - 1;
        while (fwd < bwd) {
            char fChar = s.charAt(fwd);
            char bChar = s.charAt(bwd);
            if (!Character.isLetterOrDigit(fChar))
                fwd++;
            else if (!Character.isLetterOrDigit(bChar))
                bwd--;
            else if (Character.toLowerCase(fChar) != Character.toLowerCase(bChar))
                return false;
            else {
                fwd++;
                bwd--;
            }
        }
        return true;
    }
}