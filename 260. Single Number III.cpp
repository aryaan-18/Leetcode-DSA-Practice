class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        vector<int> result(2);
        for(int i = 0; i < n; i++){
            int c  = 0;
            for(int j = 0; j < n; j++){
                if(nums[i] == nums[j]){
                    c++;
                }
            }
            if(c == 1){
                result[count] = nums[i];
                count++;
                if(count == 2){
                    break;
                }
            }
        }
        return result;
    }
};
