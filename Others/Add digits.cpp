/* Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it. */


class Solution(object):
    def addDigits(self, num):
        sums = 0 
        while num > 0:
            res = num % 10
            sums += res
            num = num // 10
        while sums >= 10:
            num = sums
            sums = 0
            while num > 0:
                res = num % 10
                sums += res
                num = num // 10
        return sums
