/* 950. Reveal Cards In Increasing Order */

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        int len = deck.size();
        vector<int> result(len, 0);
        int i = 0, idx = 0;
        bool skip = false;
        while(idx < len){
            if(result[i] == 0){
                if(!skip){
                    result[i] = deck[idx];
                    idx++;
                }
                skip = !skip;
            }
            i = (i+1) % len;
        }
        return result;
    }
};
