// week10-1a.cpp
// 1523. Count Odd Numbers in an Interval Range
// 計算 low 到 high 之間有幾個奇數

class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i = low; i <= high; i++){
            if(i % 2 == 1) ans++;
        }
        return ans;
    }
};
