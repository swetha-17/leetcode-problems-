class Solution(object):
    def twoOutOfThree(self, nums1, nums2, nums3):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :type nums3: List[int]
        :rtype: List[int]
        """
        set1 = set(nums1)
        set2 = set(nums2)
        set3 = set(nums3)

        count = {}

        for num in set1:
            count[num] = count.get(num, 0) + 1
        for num in set2:
            count[num] = count.get(num, 0) + 1
        for num in set3:
            count[num] = count.get(num, 0) + 1

        result = [num for num, c in count.items() if c >= 2]

        return result