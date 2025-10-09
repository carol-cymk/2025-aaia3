///week05-2.cpp
///熟悉 stringstream
#include <iostream> ///cin,cout,getline
#include <sstream>///stringstream
#include <string>
using namespace std;
int main()
{
    cout << "請輸入一段英文,裡面可有空格: ";
    string s;///字串s
    getline(cin,s);
    cout << "讀到了字串: " << s << endl;
    stringstream ss(s);
    string word;
    while( ss >> word ){
        cout  << "有一個字: " << word << endl;
    }
}
