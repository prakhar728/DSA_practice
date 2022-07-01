class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector <int> result;
    unordered_map <int,int> forward;
        for(int i=0;i<nums.size();i++){
            int required = target-nums[i];
            if(!(forward.find(required)==forward.end())){
                result.push_back(i);
                result.push_back(forward[required]);
            }
            if(forward.find(nums[i])==forward.end()){
                forward[nums[i]]=i;
            }
        }
        return result;
    }
 
};