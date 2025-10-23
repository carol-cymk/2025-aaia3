// week07-2.cpp 像萬花星一樣 
// 輸出超大的正方形。數字一圈圈包起來
// TAICA 交大基礎程式設計(C++) 期中考題 第6題
#include <iostream>
#include <cmath> /// 這是C的 math.h 裡面有 sin() cos() abs() sqrt()
using namespace std;

int main()
{
    int n;  /// Part 1: Input
    cin >> n;

    for (int i = 1; i < n * 2; i++) {  /// Part 2: Output
        for (int j = 1; j < n * 2; j++) {
            /// 印出來之後，發現正中間的1很有意思/有點東西!!!
            int d = max(abs(i - n), abs(j - n));
            cout << d + 1;
        }
        cout << endl;  /// 換行
    }
    /// 2會有3層樓，3會有5層樓，4會有7層樓，5會有9層樓
}

