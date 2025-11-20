// week11-3.cpp  習習資料 Math 第3章
// LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0; // 三種錢票

        for (int bill : bills) {      // C++增強 for迴圈
            if (bill == 5) d5++;      // 顧客給5元，收入5元

            if (bill == 10) {         // 客人給你10元鈔
                if (d5 < 1) return false; // 你要找5元，沒有5元鈔，失敗
                d10++;               // 拿到10元鈔
                d5--;                // 找出5元給客人
            }

            if (bill == 20) {        // 客人給20元鈔，要找15元
                if (d10 > 0 && d5 > 0) {   // 可以用10 + 5 找錢
                    d20++;
                    d10--;
                    d5--;
                } else if (d5 >= 3) {      // 否則用 3張5元
                    d20++;
                    d5 -= 3;
                } else return false;       // 都找不開，失敗
            }
        }

        return true; // 順利賣光，成功!!!
    }
};
