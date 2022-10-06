// The array-form of an integer num is an array representing its digits in left to right order.

// For example, for num = 1321, the array form is [1,3,2,1].
// Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

 

// Example 1:

// Input: num = [1,2,0,0], k = 34
// Output: [1,2,3,4]
// Explanation: 1200 + 34 = 1234

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        vector<int> result;
		int n = num.size() - 1;
		int carry=0;
		while (n >= 0 || k || carry) {
			int ans= 0;
			if (n >= 0) {
				ans += num[n];
                n--;
			}
			if (k) {
				ans += k % 10;
				k /= 10;
			}
			if (carry) {
				ans+= carry;
			}
			carry = ans/10;
			result.push_back(ans % 10);
            
		}
		reverse(result.begin(),result.end());
		return result;

    }
};
