# Given an unsorted list of integers, return the length of the longest consecutive element sequence.
# Example:
# Input: [100, 4, 200, 1, 3, 2] → Output: 4
# (Sequence: 1,2,3,4)

def longest_consecutive(nums):
    num_set = set(nums)
    longest = 0

    for num in nums:
        if num - 1 not in num_set:
            current = num
            streak = 1

      
            while current + 1 in num_set:
                current += 1
                streak += 1

            longest = max(longest, streak)

    return longest



nums = [9, 1, 4, 7, 3, 2, 6, 8]
print(longest_consecutive(nums))   
