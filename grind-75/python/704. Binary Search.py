from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        left = 0
        right = len(nums)-1

        while left <= right:
            mid = left + (right - left) // 2
            # if the midpoint is greater than our target then we need to search in lower bound ( move right to below midpoint )
            if (nums[mid] > target): right = mid-1
            # if the midpoint is lesser than our target then we need to search in the upper bound ( move the left to above midpoint )
            elif (nums[mid] < target): left = mid+1
            # otherwise we've found our target
            else: return mid

        return -1