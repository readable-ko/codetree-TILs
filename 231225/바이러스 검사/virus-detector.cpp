#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, master, member;
    cin >> N;
    vector<int> store(N);

    for (int &it: store)
        cin >> it;
    
    cin >> master >> member;
    
    for (int s: store) {
        int left = s - master, answer = 1;
        if (left > 0) {
            answer = ceil(left/double(member));
        }
        cout << answer << " ";
    }
    return 0;
}