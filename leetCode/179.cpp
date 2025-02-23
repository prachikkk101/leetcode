class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // Convert integers to strings
        vector<string> strNums;
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }

        // Sort the strings using a custom comparator
        sort(strNums.begin(), strNums.end(), [](string& a, string& b) {
            return a + b > b + a; // Compare concatenated strings to decide order
        });

        // If the largest number is "0", the result is just "0"
        if (strNums[0] == "0") {
            return "0";
        }

        // Join the strings to form the largest number
        string result = "";
        for (string& str : strNums) {
            result += str;
        }

        return result;
    }
};


