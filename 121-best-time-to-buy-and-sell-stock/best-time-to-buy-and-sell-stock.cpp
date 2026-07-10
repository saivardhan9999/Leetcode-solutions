class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_p=0,curr=prices[0];
        for(int i=1;i<prices.size();i++){
            curr=min(curr,prices[i]);
            max_p=max(max_p,prices[i]-curr);
        }
        return max_p;
    }
};