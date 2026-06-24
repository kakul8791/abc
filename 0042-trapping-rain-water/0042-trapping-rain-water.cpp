class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int leftmax=0;
        int rightmax=0;

        int water=0;

        while(l<=r){
            if(leftmax<=rightmax){
                if(height[l]>=leftmax){
                    leftmax=height[l];
                }
                else{
                    water+=leftmax-height[l];
                }
            l++;
            }
        else{
            if(rightmax<=height[r]){
                rightmax=height[r];

            }
            else{
                water+=rightmax-height[r];
            }
            r--;
        }
        }
        return water;
        
    }
};