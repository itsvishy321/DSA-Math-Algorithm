// An array nums of length n is beautiful if:

// nums is a permutation of the integers in the range [1, n].
// For every 0 <= i < j < n, there is no index k with i < k < j where 2 * nums[k] == nums[i] + nums[j].
// Given the integer n, return any beautiful array nums of length n. There will be at least one valid answer for the given n.

 

// Example 1:

// Input: n = 4
// Output: [2,1,4,3]


class Solution {
public:
    vector<int> beautifulArray(int n) {
        
        //We have to make an array which does not statisfies the condition of an AP
        
        
        vector<int> ans = {1};
        
        while(ans.size() < n)
        {
            vector<int> temp;
            for(int i = 0 ; i < ans.size() ; i++)
            {
                if(2*ans[i]-1 <= n)
                    temp.push_back(2*ans[i]-1);
            }
            for(int i = 0 ; i < ans.size() ; i++)
            {
                if(2*ans[i] <= n)
                    temp.push_back(2*ans[i]);
            }
            ans = temp;
        }

        return ans;
    }
};
