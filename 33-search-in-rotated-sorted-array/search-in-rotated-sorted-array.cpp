class Solution {
public:
    int search(vector<int>& nums, int target) {

       int st=0;
       int end=nums.size()-1;
       while(st<=end)
       {
        int mid;
        mid=(st+end)/2;
        if(nums[mid]==target)
        {
            return mid;

        }
        if(nums[st]<=nums[mid]) //left part is sorted
        {
            if(nums[st]<=target && target<=nums[mid])// search in laft part
            {
                end=mid-1;

            }
            else //search in right part
            {
                st=mid+1;
            }
        }
        else //right part is sorted
        {
            if(nums[mid]<=target && target<=nums[end])//search in right part
            {
                st=mid+1;
            }
            else //search in left part
            {
                end=mid-1;
            }

        }
       }
       return -1;
    }
};