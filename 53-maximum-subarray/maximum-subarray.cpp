class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int best=nums[0],curmax=nums[0];
        for(int i=1;i<n;i++)
        {
            curmax=max(nums[i],nums[i]+curmax);
            best=max(best,curmax);
        }
        return best;
    }
};