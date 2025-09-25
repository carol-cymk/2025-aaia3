///week 03-1.cpp
///File-Save As
#include <iostream> ///c++的cin cont
#include <vector> ///c++的陣列 vector
using namespace std;
int main()
{
    vector<int> a(2);
    for(int i=0;i<a .size();i++)cout << a[i] <<' '; ///印出陣列
    cout << endl; ///跳行

    a.push_back(99);
    a.push_back(77);

    for(int i=0;i<a.size();i++)cout << a[i] <<' '; ///印出陣列
    cout << endl; ///跳行
}
