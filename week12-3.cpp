// week12-3.cpp
// leetcode 學習計畫 Math 數學 倒數第2題
// #43. Multiply Strings

class Solution {
public:
    string multiply(string num1, string num2) {

        if (num1 == "0" || num2 == "0") return "0";

        int N1 = num1.length(), N2 = num2.length();
        vector<int> ans(N1 + N2);

        // 從後面開始做乘法
        for (int i = N1 - 1; i >= 0; i--) {
            for (int j = N2 - 1; j >= 0; j--) {

                ans[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');

                if (ans[i + j + 1] > 9) {
                    ans[i + j] += ans[i + j + 1] / 10;   // 進位
                    ans[i + j + 1] %= 10;               // 個位數
                }
            }
        }

        string strAns;

        // 如果最高位是 0，要跳過
        if (ans[0] == 0) {
            for (int i = 1; i < N1 + N2; i++)
                strAns += (char)(ans[i] + '0');
        }
        else {
            for (int i = 0; i < N1 + N2; i++)
                strAns += (char)(ans[i] + '0');
        }

        return strAns;
    }
};
