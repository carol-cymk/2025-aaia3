///week05-2.cpp
///���x stringstream
#include <iostream> ///cin,cout,getline
#include <sstream>///stringstream
#include <string>
using namespace std;
int main()
{
    cout << "�п�J�@�q�^��,�̭��i���Ů�: ";
    string s;///�r��s
    getline(cin,s);
    cout << "Ū��F�r��: " << s << endl;
    stringstream ss(s);
    string word;
    while( ss >> word ){
        cout  << "���@�Ӧr: " << word << endl;
    }
}
