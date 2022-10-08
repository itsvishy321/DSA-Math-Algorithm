// A complex number can be represented as a string on the form "real+imaginaryi" where:

// real is the real part and is an integer in the range [-100, 100].
// imaginary is the imaginary part and is an integer in the range [-100, 100].
// i2 == -1.
// Given two complex numbers num1 and num2 as strings, return a string of the complex number that represents their multiplications.

 

// Example 1:

// Input: num1 = "1+1i", num2 = "1+1i"
// Output: "0+2i"
// Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.




class Solution {
public:

    string complexNumberMultiply(string num1, string num2) {
         
        string real1,real2,img1,img2;
        
//      Making real part of complex number 1
        int i=0;
        while(num1[i] != '+')
        {
            real1 += num1[i];
            i++;
        }
        
//      Making imaginary part of complex number 1
        img1 = num1.substr(i+1,num1.length()-i);
        
//      Making real part of complex number 1
        i=0;
        while(num2[i] != '+')
        {
            real2 += num2[i];
            i++;
        }
        
//      Making imaginary part of complex number 1
        img2 = num2.substr(i+1,num2.length()-i);
        
//      Converting real and imaginary string to int   
        int r1 = stoi(real1) , r2 =stoi(real2);
        int i1 = stoi(img1) , i2 = stoi(img2);
        
//      Product of 2 complex numbers   
        int real = (r1*r2) - (i1*i2);
        int img = (i1*r2) + (i2*r1);

        
        string ans = to_string(real) + "+" + to_string(img) + "i";
        
        return ans;
    }
};
