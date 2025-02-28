class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        
        // Loop through the string and reverse each word
        for (int i = 0; i <= n; ++i) {
            // When we reach a space or the end of the string, we know we've reached a word
            if (i == n || s[i] == ' ') {
                // Reverse the word from start to i-1
                int end = i - 1;
                while (start < end) {
                    swap(s[start], s[end]);
                    start++;
                    end--;
                }
                start = i + 1;  // Move start to the next word after the space
            }
        }
        return s;
    }
};
