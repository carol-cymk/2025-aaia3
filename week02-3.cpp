///week02-2b.cpp part 2
///SOTT106_ADVANCE_001 Using C++
#include <iostream>///cin  cout Ū�J���,�L�X���
#include <string>///string �r�ꪺ�\��
using namespace std; ///�ϥΩR�W�Ŷ��зǪ�std
int main()
{
   string a; ///�ŧi�r�� a
   cin >> a; ///�ѤJ�r�� a

   string ans;///�ŧi�r�� ans �񵪮ץΪ�
   int N=a.length();///�r�� a ������
   for(int i=N-1;i>=0;i--){ ///�˹L�Ӫ��j��
       ans += a[i];///�b�j��� �� a[i] ��� ans ���᭱
   }
   cout << a << '+' << stoi(ans) << '='
        << stoi(a)+stoi(ans) << endl;
}///stoi is "string to int"��r���ܦ����
