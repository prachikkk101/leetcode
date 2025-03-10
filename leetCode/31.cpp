class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        string prev = countAndSay(n - 1);//this is from question only
        string result = "";//creating an empty string
        int count = 1;//initialising count equals to 1
        for (int i = 1; i < prev.size(); i++) {
            if (prev[i] == prev[i - 1]) {//if simulataneous numbers are equal the counting the frequency of them
                count++;
            } else {
                result += to_string(count) + prev[i - 1];//appending both frequency and number
                count = 1;  
            }
        }
        result += to_string(count) + prev[prev.size() - 1];
        
        return result;
    }
};
