class Solution {
public:
    int FirstPos(vector<int>&nums, int target ){
        int low=0;
        int n=nums.size();
        int high=n-1;
        int ans=-1;
        while(low<=high){
int mid = low + (high - low) / 2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;//keep searching left
            }
            else if(nums[mid]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        return ans;
    }
    public:
    int LastPos(vector<int>&nums, int target ){
        int low=0;
        int n=nums.size();
        int high=n-1;
        int ans=-1;
        while(low<=high){
int mid = low + (high - low) / 2;       
     if(nums[mid]==target){
                ans=mid;
                low=mid+1;//keep searching right
            }
            else if(nums[mid]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
       return {FirstPos(nums,target), LastPos(nums,target)};

    }
};