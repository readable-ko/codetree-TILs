#include <bits/stdc++.h>
using namespace std;

int main() {
    int K = 3, num;

    while (K--) {
        cin >> num;
        num & 1 ? cout << num * 3 - 20 << " " : cout << num / 2 << " ";
    }

    return 0;
}