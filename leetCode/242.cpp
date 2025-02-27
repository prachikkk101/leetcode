#include <algorithm> // for sort
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }
        
      
        sort(s.begin(), s.end());//so basically if we sort both the strings is will sort and then we can compare that if both strings have same letters or not;
        sort(t.begin(), t.end());
        

        if (s == t) {
            return true;
        }
        return false;

    
    }
};
