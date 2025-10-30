// week08-3.cpp
// 題目似乎是：找出 a,b,c,d 讓下列式子成立
// 25870 + a = 2^b * c * d * d * 11

#include <iostream>
using namespace std;

bool func(int a, int b, int c, int d)
{
    int left = 25870 + a, right = c * d * d * 11;
    for (int i = 0; i < b; i++){
        right *= 2;
    }

    return left == right;
}

int main()
{
    for (int a = 1; a < 10; a++) {
        for (int b = 1; b < 10; b++) {
            for (int c = 1; c < 10; c++) {
                for (int d = 1; d < 10; d++) {
                    if (func(a, b, c, d)) {
                        cout << a << b << c << d << endl;
                    }
                }
            }
        }
    }
}
