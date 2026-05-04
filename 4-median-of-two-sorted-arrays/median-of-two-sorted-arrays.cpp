class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        a.insert(a.end(), b.begin(), b.end());
        sort(a.begin(),a.end());
        int n=a.size();
        if (n % 2 != 0) return a[n/2];
        else return (a[n/2] + a[n/2 - 1]) / 2.0;
    }
};