class Solution {
public:
    int search(vector<int>& nums, int k) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        while (st<=end)
        {
            int mid=(st+end)/2;
            if(nums[mid]==k)
            {
                return mid;
            }
            if(nums[st]<=nums[mid]) //left is sorted
            {
                if(nums[st]<=k && k<=nums[mid])// target is in right side
                {
                    end=mid-1;
                }
                else // target is in right side
                {
                    st=mid+1;
                }
            }
            else //right is sorted
            {
                if(nums[mid]<=k && k<=nums[end])  // target is in right side
                {
                    st=mid+1;

                }
                else
                {
                    end=mid-1;  // target is in right side
                }

            }
        }
        return -1;
       
        
    }
};