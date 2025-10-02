//week04-2
//Leecode 896.Monotonic Array
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0,down=0;
        for(int i=1;i<nums.size();i++){
        if(nums[i-1]<nums[i])up=1;
        if(nums[i-1]>nums[i])down=1;
        }
        if(up==1 && down==1)return false;
        return true;
    }
};
