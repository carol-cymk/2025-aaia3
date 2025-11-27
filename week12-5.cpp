// week12-5.cpp 學習計畫 basic 倒數第3題
// LeetCode 1502. Can Make Arithmetic Progression From Sequence

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        sort(arr.begin(), arr.end());   // 把數字排好後，距離應該要一致

        int d = arr[1] - arr[0];        // 距離（標準的距離）

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i-1] != d) // 距離不同
                return false;           // 直接失敗
        }

        return true;                    // 全部通過 → 成功
    }
};
