class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t): return False
        
        s_occurrences = {}
        t_occurrences = {}

        for c in s :
            try: s_occurrences[c] = s_occurrences[c]+1
            except: s_occurrences[c] = 0
        
        for c in t :
            try: t_occurrences[c] = t_occurrences[c]+1
            except: t_occurrences[c] = 0

        return s_occurrences == t_occurrences