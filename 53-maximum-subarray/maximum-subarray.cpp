class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int best=nums[0],currmax=nums[0];
        for(int i=1;i<n;i++)
        {
            currmax=max(currmax+nums[i],nums[i]);
            best=max(best,currmax);
        }
        return best;
    }
};