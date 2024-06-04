//409. Longest Palindrome
import java.util.HashMap;

class Solution {
    public int longestPalindrome(String s) {
        // Create a HashMap to track the frequency of each character
        HashMap<Character, Integer> track = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            char current = s.charAt(i);
            track.put(current, track.getOrDefault(current, 0) + 1);
        }

        int len = 0;
        boolean oddFlag = false;  // Flag to indicate if there's at least one odd count

        // Iterate over the map entries
        for (int count : track.values()) {
            if (count % 2 == 0) {
                // If the count is even, add it to the length
                len += count;
            } else {
                // If the count is odd, add the largest even part (count - 1)
                len += count - 1;
                oddFlag = true;
            }
        }

        // If there's at least one odd count, add 1 to the length to place an odd character in the middle
        if (oddFlag) {
            len += 1;
        }

        return len;
    }
}
