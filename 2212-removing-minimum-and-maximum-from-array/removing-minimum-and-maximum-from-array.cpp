class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums.size();
        int mx=-1,mi=-1;
        int mid=n/2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
            maxi=nums[i];
            mx=i;
            }
            if(nums[i]<mini){
                mini=nums[i];
                mi=i;

            }
        }
        int front =max(mx,mi)+1;
        int back=n - min(mx,mi);
        int both = min(mi, mx) + 1 + n - max(mi, mx);


        
    return min({front,back,both});
    }
};