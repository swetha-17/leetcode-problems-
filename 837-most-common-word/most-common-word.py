class Solution(object):
    def mostCommonWord(self, paragraph, banned):
        """
        :type paragraph: str
        :type banned: List[str]
        :rtype: str
        """
        for c in string.punctuation: 
            paragraph = paragraph.replace(c, " ")
            
        c = Counter(paragraph.lower().split())
        
        for item, count in c.most_common():
            if item not in banned:
                return item
        return None
        