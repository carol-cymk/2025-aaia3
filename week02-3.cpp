///week02-2b.cpp part 2
///SOTT106_ADVANCE_001 Using C++
#include <iostream>///cin  cout 讀入資料,印出資料
#include <string>///string 字串的功能
using namespace std; ///使用命名空間標準的std
int main()
{
   string a; ///宣告字串 a
   cin >> a; ///識入字串 a

   string ans;///宣告字串 ans 放答案用的
   int N=a.length();///字串 a 的長度
   for(int i=N-1;i>=0;i--){ ///倒過來的迴圈
       ans += a[i];///在迴圈裡 把 a[i] 塞到 ans 的後面
   }
   cout << a << '+' << stoi(ans) << '='
        << stoi(a)+stoi(ans) << endl;
}///stoi is "string to int"把字串變成整數
