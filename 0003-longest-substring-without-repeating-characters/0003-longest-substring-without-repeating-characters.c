#include <string.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int lengthOfLongestSubstring(char* s) {
    int last_seen[256] = {0}; // Stores (index + 1) of last occurrence
    int max_len = 0;
    int left = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = (unsigned char)s[right];
        
        // If character seen inside current window, jump left pointer forward
        if (last_seen[ch] > left) {
            left = last_seen[ch];
        }

        max_len = MAX(max_len, right - left + 1);
        last_seen[ch] = right + 1; // Update last seen index (+1 shift)
    }

    return max_len;
}