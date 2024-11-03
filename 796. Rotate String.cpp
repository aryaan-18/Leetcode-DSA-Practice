class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        else{
            string d = s;
            string t = s + d;
            if(t.find(goal) == string::npos)
                return false;
            else 
                return true;
        }
    }
};
