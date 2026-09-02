class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        // trim down your search space by removing first and last elements
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int low=1;
        int high=n-2;
        while(low<=high){
            int mid= low+(high - low)/2;
            // check if mid is the unquie element
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            return nums[mid];
        // if we are in left
        if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid % 2==1 && nums[mid]==nums[mid-1]))
        // eliminate left half
        low=mid+1;
        else
        // eliminate right half
        high=mid-1;
        }
        return -1;
    }
};