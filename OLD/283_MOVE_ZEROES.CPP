class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        if(nums.size()==0|| nums.size()==1)
            return;
        
       int left=0,right=0;
        int temp;
        while(right<nums.size()){
            if(nums[right]==0) ++right;
            else{
                temp=nums[left];
                nums[left]=nums[right];
                nums[right]=temp;
                ++left;
                ++right;
            }
        }
    }
};