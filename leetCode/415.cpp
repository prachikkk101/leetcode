class Solution {
public:
    string addStrings(string num1, string num2) {
        int num11 = stoi(num1);
        int num12 = stoi(num2);
        int num23 = num11 + num12;
        string s = to_string(num23);
        return s;

        
    }

};//this code is giving runtime error so;



class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int carry = 0;  
        
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        
        
        while (i >= 0 || j >= 0 || carry != 0) {
            int sum = carry;
            
           
            if (i >= 0) {
                sum += num1[i] - '0';
                i--;
            }
            
            
            if (j >= 0) {
                sum += num2[j] - '0';
                j--;
            }
            
           
            carry = sum / 10;
            
            
            result += (sum % 10) + '0';
        }
        
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
