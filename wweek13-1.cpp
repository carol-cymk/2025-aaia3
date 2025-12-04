// week13-1.cpp 聖誕倒數賽程式Advent of Code 2025 第1天第1題
// Moodle 點擊 adventofcode.com 網址 可看到原題，白字的題目
// 在 LeetCode 的 My Playground 我的遊戲場,可以寫程式
// LeetCode 會幫把 #include 全部加好了，你不用寫 #include
// 右下角 stdin 可貼上你的程式 Input

int main() {
    char c; // 字母，對應方向 L左轉 R右轉
    int d; // 數字，要轉動幾格
    int now = 50; // 一開始的密碼鎖，指向 50
    int ans = 0; // 轉動時，有幾次停在 0 的地方？（我們的通關密碼）
    while ( cin >> c >> d ) { // 一直讀資料：讀字母、讀數字
        // 把上面兩行的中文註解解掉
        if (c=='L') now = now - d; // 減掉
        if (c=='R') now = now + d; // 加上

        now = (now%100 + 100) % 100; // 太大時、太小時，都限制在 0~99 間
        //cout << "現在的刻度是：" << now << "\n";
        if (now==0) ans++; // 轉動時，停在 0 的地方（我們的通關密碼）
    }
    cout << "答案是：" << ans;
}



/*
Input: 從圖片剪貼備份的 Input
L68
L30
R48
L25
R60
L55
L1
L99
R14
L82
*/
