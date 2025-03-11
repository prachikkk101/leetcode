class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        
        // If either number is "0", the result is "0"
        if (num1 == "0" || num2 == "0") return "0";
        
        // Create a result vector to store the multiplication result
        vector<int> result(len1 + len2, 0);
        
        // Multiply each digit from num1 with each digit from num2
        for (int i = len1 - 1; i >= 0; --i) {
            for (int j = len2 - 1; j >= 0; --j) {
                // Multiply the digits
                int mul = (num1[i] - '0') * (num2[j] - '0');
                // Add to the appropriate position in result
                int sum = mul + result[i + j + 1];
                
                // Carry over the tens place
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }
        
        // Convert the result vector to a string
        string s = "";
        for (int i = 0; i < result.size(); i++) {
            // Skip leading zeros
            if (!(s.empty() && result[i] == 0)) {
                s += to_string(result[i]);
            }
        }
        
        return s.empty() ? "0" : s; // In case the result is "0"
    }
};

