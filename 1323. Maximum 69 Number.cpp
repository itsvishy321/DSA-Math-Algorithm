// You are given a positive integer num consisting only of digits 6 and 9.

// Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

 

// Example 1:

// Input: num = 9669
// Output: 9969
// Explanation: 
// Changing the first digit results in 6669.
// Changing the second digit results in 9969.
// Changing the third digit results in 9699.
// Changing the fourth digit results in 9666.
// The maximum number is 9969.


class Solution {
public:
    int maximum69Number (int num) {
        vector<int> ans;
        while(num!=0)
        {
            ans.push_back(num%10);
            num /= 10;
        }
        reverse(ans.begin(),ans.end());
        int n = ans.size();
        
//         making the first occured dig
        for(int i = 0 ; i<n ; i++)
        {
            if(ans[i] == 6)
            {
                ans[i] = 9;
                break;
            }
        }
        
        for(int i = 0 ; i<n ; i++)
        {
            num += pow(10,n-i-1)*ans[i];
        }
        return num;
    }
};
