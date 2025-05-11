class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """
        soldier_count = []
        for i, row in enumerate(mat):
            count = sum(row)
            soldier_count.append((count, i))
        soldier_count.sort()
        return [index for _, index in soldier_count[:k]]