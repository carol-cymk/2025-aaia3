// week10-1b.cpp
// 1523. Count Odd Numbers in an Interval Range
// 使用公式：奇數個數 = (high - low) / 2 + (if low 或 high 有奇數則 +1)

class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low) / 2;
        if (high % 2 == 1 || low % 2 == 1) ans++;
        return ans;
    }
};
