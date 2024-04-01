class Solution:
    def is_palin(self,str):
        return str==str[::-1]

    def longestPalindrome(self, s: str) -> str:
        max=0
        longest=""
        for i in range(len(s)):
            for j in range(i+1,len(s)+1):
                subs=s[i:j]
                if self.is_palin(subs) and len(subs)>max:
                    longest=subs
                    max=len(subs)
        return longest

        