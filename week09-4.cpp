// week09-4.cpp
// SLJ-Array-016
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k, n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int now = 0;
            for (int k = 0; k < n; k++) {
                now += a[i][k] * b[k][j];
            }
            printf("%3d ", now);
        }
        printf("\n");
    }
}
