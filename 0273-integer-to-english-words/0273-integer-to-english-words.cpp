class Solution {
    vector<string> below20 = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
                              "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string helper(int n) {
        if (n == 0) return "";
        if (n < 20) return below20[n] + " ";
        if (n < 100) return tens[n / 10] + " " + helper(n % 10);
        return below20[n / 100] + " Hundred " + helper(n % 100);
    }

public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        vector<string> units = {"", "Thousand", "Million", "Billion"};
        string ans = "";
        int i = 0;

        while (num > 0) {
            if (num % 1000 != 0) {
                ans = helper(num % 1000) + units[i] + " " + ans;
            }
            num /= 1000;
            i++;
        }

        while (ans.back() == ' ') {
            ans.pop_back();
        }
        
        return ans;
    }
};