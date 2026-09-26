class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}  # Stores the value and its index
        
        for i, num in enumerate(nums):
            complement = target - num
            
            # If the complement exists, we found our pair
            if complement in num_map:
                return [num_map[complement], i]
                
            # Otherwise, add the current number and its index to the map
            num_map[num] = i
            
        return []
        