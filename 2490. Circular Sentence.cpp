class Solution {
public:
    bool isCircularSentence(string sentence) {
        int l = sentence.size();
        for(int i = 0; i < l; i++){
            if(sentence[i] == ' ' && !(sentence[i-1] == sentence[i+1]))
                return false;
        }
        if(sentence[0] != sentence[l-1])
            return false;
        else
            return true;
    }
};
