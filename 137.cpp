class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;  //initializing two integers to storwe wether the number is repeating one time or two time as we have to return the single time repeating number
        for(int i = 0 ; i<nums.size() ; i++){
            ones = (ones ^ nums[i]) &~ twos; //~twos means the digit present in twos it will get inverse in its binary form
            twos = (twos ^ nums[i]) &~ ones;
        }

        return ones; 
    }
};
