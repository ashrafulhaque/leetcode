// Problem: https://leetcode.com/problems/palindrome-number/
// Programmer: Md. Ashraful Haque
// Date: 04.08.2024

class Solution {
public:
    bool isPalindrome(int x) {
        if( x >= 0)
        {
            long reversed = 0;
            int xcopy = x, remainder;
            while(xcopy){
                remainder  = xcopy % 10;
                xcopy /= 10;
                reversed = reversed * 10 + remainder;
            }
            if(reversed == x)
                return true;
        }
        return false;
    }
};