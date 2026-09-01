class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid = low + (high - low) / 2;   
             if(nums[mid]==target){
                return true;
            }
         //edge case if all low=mid=high
            //can't compare and indentify the sorted array
            if((nums[mid]==nums[low])&&(nums[mid]==nums[high])){
                //mid is already compared trim down the search space to 
                //low++ and high-- because if at mid!= target it , won't be at low &high
                low++;
                high--;
                continue;
            }
            // determine the sorted half
            // left half
            if(nums[low]<=nums[mid]){
            if(nums[low]<=target && nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;

            
        }
         else{// right half is sorted
        // if it is present in the right half
        if(nums[mid]<target && nums[high]>=target)
        low=mid+1;
        else 
        high=mid-1;

        }
       
    }
   return false;
    }

};