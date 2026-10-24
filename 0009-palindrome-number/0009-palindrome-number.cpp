#include <cstdint>

class Solution {
public:
    /**
     * Determines whether an integer is a palindrome.
     * 
     * @param x The input integer to evaluate.
     * @return true if x is a palindrome, false otherwise.
     */
    bool isPalindrome(int x) {
        // Negative numbers and non-zero numbers ending in 0 are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        
        // Reverse only the second half of the number
        while (x > reversedHalf) {
            reversedHalf = (reversedHalf * 10) + (x % 10);
            x /= 10;
        }

        // For even-length numbers: x == reversedHalf
        // For odd-length numbers: x == reversedHalf / 10 (middle digit ignored)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};