//2073. Time Needed To Buy Tickets

#include <math.h>
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        int ticket_k = tickets[k];
        int len = tickets.size();
        for(int i = 0; i < len ; i++){
            if(i <= k){
                time += min(tickets[i], ticket_k);
            }
            else{
                time += min(ticket_k-1,tickets[i]);
            }
        }
        return time;
    }
};
