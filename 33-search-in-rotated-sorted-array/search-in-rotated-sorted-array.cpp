class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size();
       int low=0;
       int high=n-1;
       while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target)
        return mid;
        //determine the sorted half
        // if left is sorted
        if(nums[low]<=nums[mid]){
            // present in left half
            if(nums[low]<=target && nums[mid]>target){
                //eliminate right half
                high=mid-1;}

            else {low=mid+1;}
        }
        else{// right half is sorted
        // if it is present in the right half
        if(nums[mid]<target && nums[high]>=target)
        low=mid+1;
        else 
        high=mid-1;

        }
       } 
       return -1;
       
    }
};