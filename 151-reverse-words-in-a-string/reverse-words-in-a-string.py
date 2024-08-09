class Solution:
    def reverseWords(self, s: str) -> str:
        a=s.split()
        res=""
        for words in a[::-1]:
            res+=words
            res+=" "
        return res.strip()
        