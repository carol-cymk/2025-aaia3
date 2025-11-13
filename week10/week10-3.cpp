// week10-3.cpp  把「羅馬數字」 轉出來
// LeetCode 13. Roman to Integer
// 6: VI  7: VII  3: III  4: IV  5: V
// 9: IX  8: VIII  10: X
// 11: XI  12: XII
// (1) 要有規則字母與數字
// (2) 正常的相加，倒裝句
// Input: "MCMXCIV"
// M:1000, C:100, M:1000, (X:10, C:100), (I:1, V:5)

class Solution {
public:
    int helper(char c) {   // 把1個字母，變成1個數字
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int total = 0, prev = 0, now = 0;
        for (int i = 0; i < s.length(); i++) {

            // 錯誤寫法: total += helper(s[i]); // 還沒有處理「倒裝句」
            prev = now;               // 變成舊的 prev 數字
            now = helper(s[i]);       // 現在新的數字

            if (prev < now)
                total = total - prev - prev + now;  // 倒裝句：前小後大 → 扣2次prev
            else
                total += now;
        }

        return total;
    }
};
