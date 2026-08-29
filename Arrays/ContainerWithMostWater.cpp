class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size() ;
        int maxWater=0;
        int st=0, end=n-1;
        while (st<end){
            int w=end-st;
            int h=min(height[st], height[end]) ;
            int area=w*h;
            maxWater=max(maxWater, area);
            height[st]<height[end]? st++:end--;
        }
        return maxWater;
    }
};
