// week06-4.cpp
// LeetCode 學習計畫 Simulation 模擬，第2題 657. Robot Return to Origin

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; // 一開始在原點 O (Origin)

        for (char c : moves) { // C++ 進階迴圈
            if (c == 'U') {        // 往上
                y++;
            } else if (c == 'D') { // 往下
                y--;
            } else if (c == 'L') { // 往左
                x--;
            } else if (c == 'R') { // 往右
                x++;
            }
        }

        // 最後是否還在原點 (0,0)？
        if (x == 0 && y == 0)
            return true;
        else
            return false;
    }
};
