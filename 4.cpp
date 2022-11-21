#include<bits/stdc++.h>
#define lli long long int

using namespace std;

void print(int x, int y) {
    cout << "(" << x << ", " << y << ")"; 
}

int main() {
    int v[256][256];
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < 256; j++) {
            cin >> v[i][j];
        }
    }
    int x[2] = {300, -1}, y[2] = {300, -1};
    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < 256; j++) {
            if (v[i][j] == 0) {
                x[0] = min(x[0], i);
                x[1] = max(x[1], i);

                y[0] = min(y[0], j);
                y[1] = max(y[1], j);
            }
        }
    }
    print(x[0], y[0]);
    cout << ", ";
    print(x[0], y[1]);
    cout << ", ";
    print(x[1], y[0]);
    cout << ", ";
    print(x[1], y[1]);
    cout << '\n';
}
