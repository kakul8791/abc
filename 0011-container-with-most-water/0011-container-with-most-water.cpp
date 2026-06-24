class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        long long area=0;
        while(l<r){
            int width=r-l;
            int heights=min(height[r],height[l]);
            area=max(area,1LL*width*heights);

            if(height[l]<height[r]){
                l++;

            }
            else{r--;
            }
        }
        return area;
        
    }
};