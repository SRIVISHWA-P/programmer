#valid paranthesis

class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        count=[]
        check={')':'(',']':'[','}':'{'}
        for i in s:
            if i in check:
                if count and count[-1]==check[i]:
                    count.pop()
                else:
                    return False
            else:
                count.append(i) 
        return True if not count else False
