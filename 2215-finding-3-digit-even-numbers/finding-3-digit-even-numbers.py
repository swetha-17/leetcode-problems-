class Solution(object):
    def findEvenNumbers(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        result = set() 

        for i in range(len(digits)):
            for j in range(len(digits)):
                for k in range(len(digits)):
                    if i == j or j == k or i == k:
                        continue

                    a, b, c = digits[i], digits[j], digits[k]

                    if a == 0 or c % 2 != 0:
                        continue

                    num = a * 100 + b * 10 + c
                    result.add(num)

        return sorted(result)