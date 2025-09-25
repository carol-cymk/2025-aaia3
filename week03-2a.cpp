//week03-2a.cpp 
//Leecode 1822.SIign if rhe product of an Arraty
class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int ans=1;
        for(int i=0;i<nums.size();i++){
            ans *=nums[i];
        }

        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};