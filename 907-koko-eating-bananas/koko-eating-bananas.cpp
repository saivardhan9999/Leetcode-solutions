class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
        {
            r=max(piles[i],r);
        }
        while(l<r)
        {
            int mid=l+(r-l)/2;
            long long hours=0;
            for(int i=0;i<n;i++)
            {
                hours+=(piles[i]+mid-1)/mid;
            }
            if(hours<=h) r=mid;
            else l=mid+1;
        }
        return l;
    }
};