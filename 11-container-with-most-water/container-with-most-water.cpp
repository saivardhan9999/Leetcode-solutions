class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int maxwater=0;
        for(int i=0;i<n;i++)
        {
            int h=min(height[l],height[r]);
            int w=r-l;
            maxwater=max(maxwater,h*w);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxwater;
    }
};