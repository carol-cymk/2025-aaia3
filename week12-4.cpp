// week12-4.cpp
// 學習計畫 Math 第5題（倒數第4題）
// LeetCode 1232. Check If It Is a Straight Line
// 測一下，所有的點是不是在同一條直線上
// 斜率 a:b = c:d → a/b = c/d → a*d = b*c
// dx:dy = dxx:dyy → dx*dyy == dy*dxx

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];

        int dx = x1 - x0;
        int dy = y1 - y0;   // dx 是 x 的差，dy 是 y 的差

        // 從第三個點開始檢查
        for (int i = 2; i < coordinates.size(); i++) {

            int xx = coordinates[i][0];
            int yy = coordinates[i][1];

            // 檢查斜率是否一致：dx*(yy - y0) == dy*(xx - x0)
            // 如果不相等 → 不是同一直線
            if (dx * (yy - y0) != dy * (xx - x0))
                return false;
        }

        return true;   // 通過所有檢查 → 是直線
    }
};
