class Solution:
    def reverseWords(self, s: str) -> str:
        words=s.split(" ")
        list=[]
        for word in words[::-1]:
            if word!='':
                list.append(word)
        revstr=' '.join(list)
        return revstr