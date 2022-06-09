class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map <int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(map[0]!=0)
              {  nums[i]=0;
               map[0]--;
              }
            
            else if(map[1]!=0)
               { nums[i]=1;
                              map[1]--;
}
            else
                {nums[i]=2;
                               map[2]--;
}
        }
    }
};