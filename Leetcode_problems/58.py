class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        temp=""
        for i in s:
            if i!=' ':
                temp+=i
                k=len(temp)
            else:
                temp=""
        return k
