// Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

// The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 

// Example 1:

// Input: nums = [2,5,6,9,10]
// Output: 2
// Explanation:
// The smallest number in nums is 2.
// The largest number in nums is 10.
// The greatest common divisor of 2 and 10 is 2.



class Solution {
public:
    int findGCD(vector<int>& nums) {

        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());

        
        int factor;
        
        // GCD of min and max will lie in range (1,min)
        for(int i = 1 ; i<=min ; i++)
        {
            if((max%i == 0) && (min%i == 0))
            {
                factor = i;
            }
        }
        return factor;
        
    }
};
