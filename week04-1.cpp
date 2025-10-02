//week04-1.cpp
//LeeCode 3100 Water Bottles ll
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            numBottles=numBottles-numExchange+1;
            ans ++;
            numExchange ++;
        }
        return ans;
    }
};
