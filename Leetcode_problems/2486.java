// 2486. Append Characters to String to Make Subsequence
class Solution {
    public int appendCharacters(String s, String t) {
        int t_ptr=0;
        int n = t.length();
        for(int i=0;i<s.length();i++){
            if(t_ptr==n)
                break;
            if(s.charAt(i) == t.charAt(t_ptr))
                t_ptr++;
        }
        return n-t_ptr;
    }
}
