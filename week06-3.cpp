// week06-3.cpp
// LeetCode 學習計畫 Simulation 模擬 第1題 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) { // C++ 函式：計算分數
        vector<int> a;                          // 陣列 a，用來存放每一輪分數

        for (string op : operations) {     // C++ 進階迴圈
            if (op[0] == '+') {            // 把最後兩個分數相加再放回去
                int temp = a.back();       // 先記下最後一項
                a.pop_back();              // 暫時刪除最後一項
                int temp2 = a.back();      // 記下倒數第二項
                a.push_back(temp);         // 把剛剛刪掉的最後一項補回去
                a.push_back(temp + temp2); // 兩數相加，再塞回去
            } else if (op[0] == 'D') {     // 將最後一項乘以2（Double）
                a.push_back(a.back() * 2);
            } else if (op[0] == 'C') { // 刪除上一項
                a.pop_back();
            } else { //  將字串轉成整數後放入陣列
                a.push_back(stoi(op));
            }
        }

        // 最後，用 for 迴圈將陣列 a 的所有值加總
        int ans = 0;
        for (int now : a) { // C++ 進階 for 迴圈（也可用傳統 for）
            ans += now;
        }

        return ans; // 回傳總分
    }
};
