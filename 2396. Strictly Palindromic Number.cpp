// An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), 
// the string representation of the integer n in base b is palindromic.

// Given an integer n, return true if n is strictly palindromic and false otherwise.

// A string is palindromic if it reads the same forward and backward.

class Solution {
public:
    int check_palindrome(string s)
    {
        int i = 0;
        int j = s.length()-1;
        while(i<=j)
        {
            if(s[i++] != s[j--])
                return 0;
        }
        return 1;
    }
    bool isStrictlyPalindromic(int n) {
        
        // Base Condition         
        if(n<=2) 
            return false;
                  
        for(int base = 2 ; base<=n-2 ; base++)
        {
            
            //Converting Base representation of a number to string           
            string s = "";
            int temp = n;
            int rem ;
            while(temp)
            {
                rem = temp%base;
                s = s + to_string(rem);
                temp = temp / base;
            }
            
            reverse(s.begin(),s.end());
            
            // For any base from 2 to n-2 if condition fails
            if(check_palindrome(s) == 0)
                return false; 
        }
        
        // if compiler comes here that means for all bases condition holds true 
        return true;
    }
};

