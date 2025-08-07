/*
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/

class Solution(object):
    def isPalindrome(self, x):
        s = str(x)
        if s == s[::-1]:
            return True
        else:
            return False
        
