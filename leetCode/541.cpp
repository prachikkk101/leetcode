class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        
        // Loop through the string in blocks of 2k characters
        for (int i = 0; i < n; i += 2 * k) {
            int st = i;  // Start of the current block
            int end = min(i + k - 1, n - 1); // End of the block (may be less than k if we're at the end of the string)
            
            // Reverse the first k characters in the current block
            while (st < end) {
                swap(s[st], s[end]);
                st++;  // Move the start pointer forward
                end--;  // Move the end pointer backward
            }
        }

        return s;  // Return the final string
    }
};
