class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,mid,high=nums.size();
        if(target>nums[high-1]){
            return high;
        }
        while(low<=high){
            mid=(high+low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};