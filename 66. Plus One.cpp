// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

 

// Example 1:

// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        for(int i = n ; i>=0 ; i--)
        {
            if(digits[i]==9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i] += 1;
                return digits;
            }
        }
        
        
//         If compiler comes here that means all the digits are 
//         9 then array will become with all the elements having value
        // 0. Then we have to add one more element at last with value 0
//         and make first element 1.
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};
