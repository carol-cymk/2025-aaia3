///week04-6.cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a;
    cout << endl <<"陣列b的長度是"<<a.size()<<endl;

    vector<int>b(3);
    cout << endl <<"陣列b的長度是"<<b.size()<<endl;
    for(int i=0;i<b.size();i++)cout << b[i] <<" ";

    vector<int>c(3,88);
    cout << endl <<"陣列c的長度是"<<c.size()<<endl;
    for(int i=0;i<c.size();i++)cout << c[i] <<" ";

    int d[10]={9,8,7,1,2,3,6,5,4,0};
    vector<int>f(d,d+4);
    cout << endl <<"陣列f的長度是"<<f.size()<<endl;
    for(int i=0;i<f.size();i++)cout << f[i] <<" ";

    vector<int>g(d,d+10);
    cout << endl <<"陣列g的長度是"<<g.size()<<endl;
    for(int i=0;i<g.size();i++) cout << g[i] <<" ";
}
