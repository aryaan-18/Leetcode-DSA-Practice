#include <cmath>

class Solution {
public:
    int scoreOfString(string s) {
        int l = s.length();
        int result = 0;
        for(int i = 1 ; i < l ; i++){
            result += abs(int(s[i-1]) - int(s[i]));
        }
        return result;
    }
};
