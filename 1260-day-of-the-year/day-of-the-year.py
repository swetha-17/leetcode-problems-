class Solution(object):
    def dayOfYear(self, date):
        """
        :type date: str
        :rtype: int
        """
        year, month, day = map(int, date.split('-'))
        
        month_days = [31, 28, 31, 30, 31, 30, 
                      31, 31, 30, 31, 30, 31]

        if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
            month_days[1] = 29

        total_days = sum(month_days[:month - 1])

        total_days += day

        return total_days
        