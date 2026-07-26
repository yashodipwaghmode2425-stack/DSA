class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();

        int lp=0,rp=n-1;
        int currwater=0;
        int maxwater=0;

        while(lp<rp)
        {
           int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            currwater=w*ht;
            maxwater=max(currwater,maxwater);

            height[lp]<height[rp] ? lp++ :rp--;
        }
        return maxwater;
    }
};