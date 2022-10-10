// Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...].
  
class Solution {
public:
    int findNthDigit(int n) {
        
        
        long base = 9;
        int digits = 1;
        
        // Calculating the number of digits 
        while(n - base*digits > 0)
        {
            n -= base*digits;
            digits++;
            base = base*10;
        }
        
        // Calculating our target number
        int index = n%digits;
        
        if(index == 0)
            index = digits;
        
        long int num;
        if(index == digits)
            num += pow(10,digits-1) + n/digits - 1;
        
        else
            num = pow(10,digits-1) + n/digits;
        
        for (int i = index; i < digits; i ++)
            num /= 10;
        
        return num % 10;
    }
};
