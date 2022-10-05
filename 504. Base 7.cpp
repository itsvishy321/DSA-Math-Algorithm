// Given an integer num, return a string of its base 7 representation.

 

// Example 1:

// Input: num = 100
// Output: "202"



class Solution {
public:
    string convertToBase7(int num) {
        int rem , ans =0 , i = 0;
        while(num!=0)
        {
            rem = num%7;
            ans += rem*pow(10,i);
            i++;
            num = num/7;
        }
        return to_string(ans);
    }
};
