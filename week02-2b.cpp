//week02-2b.cpp part 2
//SOTT106_ADVANCE_001 Using C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
   string a;
   string ans;
   cin >> a;
   int N=a.length();
   for(int i=N-1;i>=0;i--){
       ans += a[i];
   }
   cout << a << '+' << ans << '=' << stoi(a)+stoi(ans) << endl;
}