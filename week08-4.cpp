// week08-4.cpp
// 數位黑洞 卡普列克常數 6174（大到小 - 小到大，重複7次）
#include <iostream>
#include <vector>   /// 像自如的陣列
#include <algorithm> /// 演算法 sort()是演算法喔!
using namespace std;

int main()
{
    cout << "請輸入任意4位數(都不同):"; /// ex. 1234 1 2 3 4
    int n;
    cin >> n;
    for (int i = 0; i < 7; i++) {  /// 一步步內,必定掉到黑洞 6174
        vector<int> a;  /// 像能自如的陣列
        while (n > 0) { /// 剝皮法，把4位數，逐一剝出來
            a.push_back(n % 10); /// 把它堆到陣列裡面
            n = n / 10; /// 剝完皮，就變...
        }
        sort(a.begin(), a.end()); /// 把陣列「小到大」排好…

        int M = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0]; /// 倒過來，大到小
        int m = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3]; /// 小到大
        /// ㊣一下，M是什麼？m是什麼？還沒發現
        n = M - m;
        cout << M << "減掉" << m << "得到:" << n << endl;
    }
}
