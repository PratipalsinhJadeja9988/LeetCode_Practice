class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0, count = 0;
        for (int x : nums) {
            if (count == 0) ans = x;
            count += (x == ans) ? 1 : -1;
        }
        return ans;
    }
};