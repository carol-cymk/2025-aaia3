// week07-2.cpp ���U��P�@�� 
// ��X�W�j������ΡC�Ʀr�@���]�_��
// TAICA ��j��¦�{���]�p(C++) �������D ��6�D
#include <iostream>
#include <cmath> /// �o�OC�� math.h �̭��� sin() cos() abs() sqrt()
using namespace std;

int main()
{
    int n;  /// Part 1: Input
    cin >> n;

    for (int i = 1; i < n * 2; i++) {  /// Part 2: Output
        for (int j = 1; j < n * 2; j++) {
            /// �L�X�Ӥ���A�o�{��������1�ܦ��N��/���I�F��!!!
            int d = max(abs(i - n), abs(j - n));
            cout << d + 1;
        }
        cout << endl;  /// ����
    }
    /// 2�|��3�h�ӡA3�|��5�h�ӡA4�|��7�h�ӡA5�|��9�h��
}

